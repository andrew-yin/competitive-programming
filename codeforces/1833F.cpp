#include <bits/stdc++.h>
using namespace std;

#define LL long long

const int MOD = 1E9 + 7;

LL ipow(LL base, int exp) {
    LL result = 1;
    for (;;)
    {
        if (exp & 1)
            result = (result*base) % MOD;
        exp >>= 1;
        if (!exp)
            break;
        base = (base*base) % MOD;
    }

    return result;
}

void solve() {
    int n, m; cin >> n >> m;
    map<int, int> ct;
    for (int i = 0; i < n; i++) {
        int j; cin >> j;
        ct[j]++;
    }

    vector<int> a, b;
    for (auto &i: ct) {
        a.push_back(i.first);
        b.push_back(i.second);
    }

    n = a.size();
    vector<LL> bp(n);
    bp[0] = b[0];
    for (int i = 1; i < n; i++) {
        bp[i] = (b[i]*bp[i-1]) % MOD;
    }

    LL ans = 0;
    for (int r = m-1; r < n; r++) {
        int l = r-m+1;

        if (a[r] - a[l] >= m) {
            continue;
        }

        LL i = bp[r];
        LL j = l == 0 ? 1 : bp[l-1];

        ans = (ans + i*ipow(j, MOD-2)) % MOD;
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
