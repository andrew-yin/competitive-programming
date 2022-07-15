#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        int m = INT_MAX;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            m = min(m, a[i]);
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += a[i] - m;
        }
        cout << ans << "\n"; 
    }
    return 0;
}