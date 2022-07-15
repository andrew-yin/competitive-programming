#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;

    vector<vector<vector<int>>> sums(2, vector<vector<int>>(n, vector<int>(m, 0)));
    vector<vector<int>> board(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
            int m1 = min(i, j);
            int m2 = min(i, m - 1 - j);
            sums[0][i - m1][j - m1] += board[i][j];
            sums[1][i - m2][j + m2] += board[i][j];
        }
    }

    int ans = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int m1 = min(i, j);
            int m2 = min(i, m - 1 - j);
            ans = max(ans, sums[0][i - m1][j - m1] + sums[1][i - m2][j + m2] - board[i][j]);
        }
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
}