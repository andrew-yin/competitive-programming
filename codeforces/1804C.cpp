#include <bits/stdc++.h>
using namespace std;

#define LL long long

void solve() {
    LL n, x, p; cin >> n >> x >> p;

    for (LL i = 1; i <= min(2*n, p); i++) {
        LL move = (x + i*(i+1)/2) % n;
        if (!move) {
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
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
