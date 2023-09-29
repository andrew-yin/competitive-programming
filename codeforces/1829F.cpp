#include <bits/stdc++.h>
using namespace std;

#define LL long long

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> neighbors(n+1);
    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        neighbors[u].push_back(v);
        neighbors[v].push_back(u);
    }

    vector<bool> is_leaf(n+1, false);
    for (int i = 1; i <= n; i++) {
        if (neighbors[i].size() == 1) {
            is_leaf[i] = true;
        }
    }

    int x, y;
    for (int i = 1; i <= n; i++) {
        if (is_leaf[i]) {
            int parent = neighbors[i][0];

            y = neighbors[parent].size()-1;

            for (int &j: neighbors[parent]) {
                if (!is_leaf[j]) {
                    x = neighbors[j].size();
                    break;
                }
            }
            break;
        }
    }

    cout << x << " " << y << "\n";
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
