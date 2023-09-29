#include <bits/stdc++.h>
using namespace std;

#define LL long long

int volume = 0;
int r[] = {-1, 1, 0, 0};
int c[] = {0, 0, -1, 1};

void compute(int i, int j, vector<vector<bool>> &visited, vector<vector<int>> &a) {
    volume += a[i][j];
    visited[i][j] = true;
    
    for (int k = 0; k < 4; k++) {
        int ii = i + r[k];
        int jj = j + c[k];
        if (!visited[ii][jj] && a[ii][jj] > 0) {
            compute(ii, jj, visited, a);
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<bool>> visited(n+2, vector<bool>(m+2, true));
    vector<vector<int>> a(n+1, vector<int>(m+1));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            visited[i][j] = false;
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (!visited[i][j] && a[i][j] > 0) {
                volume = 0;
                compute(i, j, visited, a);
                ans = max(volume, ans);
            }
        }
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
