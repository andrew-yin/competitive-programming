#include <bits/stdc++.h>
using namespace std;

#define LL long long

const int N = 2E5;
const int MOD = 1E9+7;
int a[N];

int set_bits(int n) {
    int ans = 0;
    while (n > 0) {
        if (n & 1) {
            ans++;
        }
        n >>= 1;
    }
    return ans;
}

void solve() {
    int n, k; cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<vector<int>> dp(n, vector<int>(64, 0));
    dp[0][a[0]] = 1;

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < 64; j++) {
            dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
            dp[i][j & a[i]] = (dp[i][j & a[i]] + dp[i-1][j]) % MOD;
        }
        dp[i][a[i]] = (dp[i][a[i]] + 1) % MOD;
    }


    int ans = 0;
    for (int i = 0; i < 64; i++) {
        if (set_bits(i) != k) {
            continue;
        }
        ans = (ans + dp[n-1][i]) % MOD;
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
