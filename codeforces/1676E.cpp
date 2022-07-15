#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q; cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    vector<int> prefix(n);
    prefix[0] = a[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i-1] + a[i];
    }

    for (int j = 0; j < q; j++) {
        int x; cin >> x;
        auto idx = lower_bound(prefix.begin(), prefix.end(), x);

        if (idx != prefix.end()) {
            cout << idx - prefix.begin() + 1 << "\n";
        }
        else {
            cout << "-1\n";
        }
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
}