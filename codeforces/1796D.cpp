#include <bits/stdc++.h>
using namespace std;

#define LL long long

const int N = 2E5;

LL n, k, x;
LL a[N];
LL dp[N][21];

void solve() {
    cin >> n >> k >> x;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    dp[0][0] = a[0] - x;
    if (k > 0) {
        dp[0][1] = a[0] + x;
    }

    for (int i = 1; i < n; i++) {
        dp[i][0] = max(a[i] - x, dp[i-1][0] + a[i] - x);

        for (int j = 1; j <= min(1LL*i+1, k); j++) {
            dp[i][j] = max(a[i] + x, dp[i-1][j-1] + a[i] + x);
            if (j <= i) {
                dp[i][j] = max(dp[i][j],
                    max(a[i] - x, dp[i-1][j] + a[i] - x)
                );
            }
        }
    }

    LL ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= min(1LL*i+1, k); j++) {
            if (n - 1 - i + j >= k) {
                ans = max(ans, dp[i][j]);
            }
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
