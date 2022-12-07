#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> ct(n+1, 0);
    for (int i = 0; i < n; i++) {
        int j; cin >> j;
        ct[j]++;
    }

    vector<int> ct_less_than(n+1, 0);
    ct_less_than[1] = ct[1];
    for (int i = 2; i <= n; i++) {
        ct_less_than[i] = ct[i] + ct_less_than[i-1];
    }

    for (int k = n; k >= 1; k--) {
        bool sol = true;
        int required = k;
        for (int i = 1; i <= k; i++) {
            if (ct_less_than[i] < required) {
                sol = false;
                break;
            }
            required++;
        }
        if (sol) {
            cout << k << "\n";
            return;
        }
    }
    cout << "0\n";
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
