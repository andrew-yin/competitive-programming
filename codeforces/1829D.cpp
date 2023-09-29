#include <bits/stdc++.h>
using namespace std;

#define LL long long

void solve() {
    LL n, m; cin >> n >> m;

    if (m > n) {
        cout << "NO\n";
        return;
    }

    LL g = __gcd(n, m);

    n /= g;
    m /= g;

    LL y = 0;
    while (m % 2 == 0) {
        m /= 2;
        y++;
    }
    if (m != 1) {
        cout << "NO\n";
        return;
    }

    LL z = 0;
    while (n % 3 == 0) {
        n /= 3;
        z++;
    }

    if (n != 1 || z < y) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
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
