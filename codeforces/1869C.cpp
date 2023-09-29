#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n, m; cin >> n >> m;
    
    int start = 0;

    vector<vector<int>> ans(n, vector<int>(m));
    for (int i = 0; i < min(n, m-1); i++) {
        int idx = start;
        for (int j = 0; j < m; j++) {
            ans[i][idx % m] = j;
            idx++;
        }
        start++;
    }

    start--;
    for (int i = min(n, m-1); i < n; i++) {
        int idx = start;
        for (int j = 0; j < m; j++) {
            ans[i][idx % m] = j;
            idx++;
        }
    }

    cout << (m == 1 ? 0 : min(n+1, m)) << "\n";
    for (vector<int> &i: ans) {
        for (int &j: i) {
            cout << j << " ";
        }
        cout << "\n";
    }
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
