#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    int am = -1;
    int bm = -1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        am = max(am, a[i]);
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        bm = max(bm, b[i]);
    }

    vector<int> act(max(am, bm)+1, 0);
    vector<int> bct(max(am, bm)+1, 0);

    int cur = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i-1]) {
            cur++;
        }
        else {
            act[a[i-1]] = max(act[a[i-1]], cur);
            cur = 1;
        }
    }
    act[a[n-1]] = max(act[a[n-1]], cur);

    cur = 1;
    for (int i = 1; i < n; i++) {
        if (b[i] == b[i-1]) {
            cur++;
        }
        else {
            bct[b[i-1]] = max(bct[b[i-1]], cur);
            cur = 1;
        }
    }
    bct[b[n-1]] = max(bct[b[n-1]], cur);

    int ans = -1;
    for (int i = 1; i <= max(am, bm); i++) {
        ans = max(ans, act[i]+bct[i]);
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
