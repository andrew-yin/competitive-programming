#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n, m; cin >> n >> m;
    vector<int> row_ct(n+1, 0);
    vector<int> col_ct(n+1, 0);

    for (int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        row_ct[x]++;
        col_ct[y]++;
    }

    bool row_two_found = false;
    bool row_zero_found = false;
    bool col_two_found = false;
    bool col_zero_found = false;
    for (int i = 1; i <= n; i++) {
        if (row_ct[i] == 0) {
            row_zero_found = true;
        }
        else if (row_ct[i] == 2) {
            if (!row_two_found) {
                row_two_found = true;
            }
            else {
                cout << "NO\n";
                return;
            }
        }
        else if (row_ct[i] > 2) {
            cout << "NO\n";
            return;
        }
    }

    for (int i = 1; i <= n; i++) {
        if (col_ct[i] == 0) {
            col_zero_found = true;
        }
        else if (col_ct[i] == 2) {
            if (!col_two_found) {
                col_two_found = true;
            }
            else {
                cout << "NO\n";
                return;
            }
        }
        else if (col_ct[i] > 2) {
            cout << "NO\n";
            return;
        }
    }
    cout << ((row_zero_found && col_zero_found) ? "YES\n" : "NO\n");
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
