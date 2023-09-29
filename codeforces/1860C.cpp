#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int N = 3E5;

int p[N];

void solve() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    int m = p[0];
    int mw = -1;
    int ans = 0;
    for (int i = 1; i < n; i++) {
        if (m < p[i] && (mw == -1 || mw > p[i])) {
            ans++;
            mw = mw == -1 ? p[i] : min(mw, p[i]);
        }
        m = min(m, p[i]);
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
