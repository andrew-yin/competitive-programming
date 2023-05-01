#include <bits/stdc++.h>
using namespace std;

int a[51];
int b[51];

void solve() {
    int n, t; cin >> n >> t;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }

    int max_ent = -1;
    int max_vid = -1;

    for (int i = 1; i <= n; i++) {
        if (i-1 + a[i] <= t) {
            if (b[i] > max_ent) {
                max_ent = b[i];
                max_vid = i;
            }
        }
    }
    cout << max_vid << "\n";
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
