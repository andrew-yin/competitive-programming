#include <bits/stdc++.h>
using namespace std;

#define LL long long

vector<int> argsort(const vector<int> v) {
    vector<int> idxs(v.size());
    iota(idxs.begin(), idxs.end(), 0);
    sort(idxs.begin(), idxs.end(), [&v](int l, int r) -> bool {
        return v[l] < v[r];
    });
    return idxs;
}

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<int> aa = argsort(a);
    sort(b.begin(), b.end());

    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        ans[aa[i]] = b[i];
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
