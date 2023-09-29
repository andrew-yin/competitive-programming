#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    vector<vector<pair<int, int>>> neighbors(n+1);
    for (int i = 0; i < n-1; i++) {
        int u, v; cin >> u >> v;
        neighbors[u].push_back(pair<int, int>(v, i));
        neighbors[v].push_back(pair<int, int>(u, i));
    }

    vector<int> idx(n+1);
    idx[1] = n;
    vector<int> rd(n+1, 0);
    rd[1] = 0;
    vector<int> parent(n+1); 
    parent[1] = 0;

    queue<int> q;
    q.push(1);
    while (!q.empty()) {
        int i = q.front();
        q.pop();

        if (i != 1) {
            int r = rd[parent[i]];
            rd[i] = (idx[i] > idx[parent[i]]) ? r : r+1;
            // cout << "set rd of " << i << " to " << rd[i] << "\n";
        }

        for (pair<int, int> &j: neighbors[i]) {
            int node = j.first;
            int index = j.second;

            if (node != parent[i]) {
                q.push(node);
                idx[node] = index;
                parent[node] = i;
            }
        }
    }

    int ans = -1;
    for (int i = 1; i <= n; i++) {
        ans = max(ans, rd[i]);
    }
    cout << ans << "\n";
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
