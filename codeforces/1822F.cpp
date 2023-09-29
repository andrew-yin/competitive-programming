#include <bits/stdc++.h>
using namespace std;

#define LL long long

const int N = 2E5;

int n, k, c;
vector<vector<int>> neighbors;

int f[N+1];
int g[N+1];
int h[N+1];
int a[N+1];

void dfs1(int x, int p) {
    if (neighbors[x].size() == 0) {
        f[x] = 0;
        h[x] = -1;
        return;
    }

    int fx = -1;
    int hx = -1;
    for (int &i: neighbors[x]) {
        if (i != p) {
            dfs1(i, x);
            if (fx == -1) {
                fx = f[i];
            }
            else if (fx <= f[i]) {
                hx = fx;
                fx = f[i];
            }
        }
    }
    f[x] = fx + 1;
    h[x] = hx + 1;
}

void dfs2(int x, int p) {
    if (p == -1) {
        g[x] = 0;
    }
    else {
        // check if parent max goes through
        if (f[p] == 1 + f[x]) {
            g[x] = max(1 + g[p], 1 + h[p]);            
        }
        else {
            g[x] = max(1 + g[p], 1 + f[p]);
        }
    }

    for (int &i: neighbors[x]) {
        if (i != p) {
            dfs2(i, x);
        }
    }
}

LL dfs3(int x, int h, int p) {
    LL ans = 1LL*a[x]*k - 1LL*h*c;
    for (int &i: neighbors[x]) {
        if (i != p) {
            ans = max(ans, dfs3(i, h+1, x));
        }
    }
    return ans;
}

void solve() {
    cin >> n >> k >> c;

    neighbors.clear(); neighbors.resize(n+1);
    for (int i = 0; i < n-1; i++) {
        int u, v; cin >> u >> v;
        neighbors[u].push_back(v);
        neighbors[v].push_back(u);
    }

    dfs1(1, -1);
    dfs2(1, -1);
    for (int i = 1; i <= n; i++) {
        a[i] = max(f[i], g[i]);
    }

    cout << dfs3(1, 0, -1) << "\n";
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
