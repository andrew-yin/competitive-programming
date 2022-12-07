#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    long long ans = 0;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ans += a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int i = 0; int j = n-1;
    for (int k = 0; k < n-1; k++) {
        if (b[i] < b[j]) {
            ans += b[i];
            i++;
        }
        else {
            ans += b[j];
            j--;
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
