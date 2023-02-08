#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k; cin >> n >> m >> k;

    int p = n/k;
    if (p >= m) {
        cout << m << endl;
        return;
    }
    else if (p < m) {
        int rem = m - p;
        int ans = p - (rem + k - 2) / (k - 1);
        cout << ans << endl;
        return;
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
