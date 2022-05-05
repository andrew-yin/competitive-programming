#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;

    cout << (2 * b - a >= 0 && (2 * b - a) % 3 == 0 && 2 * a - b >= 0 && (2 * a - b) % 3 == 0 ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}