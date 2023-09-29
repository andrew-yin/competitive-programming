#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int j; cin >> j;
        cout << n + 1 - j << " ";
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
