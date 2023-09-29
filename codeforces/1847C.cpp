#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int N = 1E5;
int a[N];
int found[256];


void solve() {
    memset(found, 0, sizeof(found));

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int cur = 0;
    int ans = 0;
    found[0] = 1;
    for (int i = 0; i < n; i++) {
        cur ^= a[i];
        found[cur] = 1;

        for (int j = 0; j < 256; j++) {
            if (found[j]) {
                ans = max(ans, j ^ cur);
            }
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
