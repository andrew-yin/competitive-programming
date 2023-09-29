#include <bits/stdc++.h>
using namespace std;

#define LL long long

void solve() {
    LL a, b; cin >> a >> b;
    LL c = max(a, b);

    LL ans = -1;
    for (LL k = 1; k <= 1E5; k++) {
        LL i = (a + k-1)/k + (b + k-1)/k + (k-1);
        if (ans == -1) {
            ans = i;
        }
        else {
            ans = min(ans, i);
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
