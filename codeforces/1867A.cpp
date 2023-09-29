#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> indices(n);
    iota(indices.begin(), indices.end(), 0);
    sort(indices.begin(), indices.end(),
            [&a](int left, int right) -> bool {
                // sort indices according to corresponding array element
                return a[left] < a[right];
    });

    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        ans[indices[i]] = n-i;
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
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
