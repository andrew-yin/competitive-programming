#include <bits/stdc++.h>
using namespace std;

#define LL long long

void solve() {
    int n, m; cin >> n >> m;

    cout << n*m << "\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << (i << 8) + j << " ";
        }
        cout << "\n";
    }
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
