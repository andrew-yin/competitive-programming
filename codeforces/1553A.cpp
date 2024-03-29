#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;

    // 9 + 10*x <= n
    // x <= (n-9)/10
    int ans = (n-9)/10;
    cout << (n >= 9 ? ans + 1 : ans) << "\n";
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
