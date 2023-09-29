#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n+1, 0);

    int ones = 0;
    for (int i = 1; i <= n; i++) {
        if (ones < (i + k - 1)/k) {
            a[i] = 1;
            ones++;
        }
    }

    ones = 0;
    for (int i = n; i >= 1; i--) {
        if (a[i] == 1) {
            ones++;
        }
        else if (ones < (n-i+1 + k - 1)/k) {
            a[i] = 1;
            ones++;
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] == 1) ans++;
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
