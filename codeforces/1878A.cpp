#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n, k; cin >> n >> k;
    set<int> seen;
    for (int i = 0; i < n; i++) {
        int j; cin >> j;
        seen.insert(j);
    }
    cout << (seen.count(k) ? "YES\n" : "NO\n");
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
