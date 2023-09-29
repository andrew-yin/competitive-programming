#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n, k, x; cin >> n >> k >> x;

    if (n < k) {
        cout << "-1\n";
        return;
    }
    if (k > x + 1) {
        cout << "-1\n";
        return;
    }

    int ans = 0;
    for (int i = 0; i < k; i++) {
        ans += i;
    }
    
    if (x == k) {
        ans += (n - k)*(k - 1);
    }
    else {
        ans += (n - k)*x;
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
