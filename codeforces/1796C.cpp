#include <bits/stdc++.h>
using namespace std;

#define LL long long

const LL MOD = 998244353;

void solve() {
    LL l, r; cin >> l >> r;

    LL m = 1;
    while (l * (1 << m) <= r) {
        m++;
    } 

    LL ans = (r/(1 << m-1) - l + 1) % MOD;

    
    ans = (ans + max(0LL, r/((1 << m-2)*3) - l + 1)*(m-1)) % MOD;

    cout << m << " " << ans << "\n";
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
