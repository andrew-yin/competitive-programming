#include <bits/stdc++.h>
using namespace std;

#define LL long long

void solve() {
    int n, k; cin >> n >> k;
    vector<LL> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    vector<LL> p(n);
    p[0] = a[0];
    for (int i = 1; i < n; i++) {
        p[i] = a[i] + p[i-1];
    }

    LL ans = -1;

    int l = 0;
    for (int i = 0; i <= k; i++) {
        LL left = l == 0 ? 0 : p[l-1];
        LL right = p[n-1 - (k - i)];
        ans = max(ans, right - left);

        l += 2;
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
