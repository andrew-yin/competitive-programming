#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x, y;
    cin >> y >> x;
    long long m = max(y, x);
    long long closest_square = m * m;
    if (m % 2) {
        closest_square -= 2 * m - 2;
    }

    long long diff = (x - 1) + max((long long)0, x - y);
    if (m % 2 == 0) {
        cout << closest_square - diff << "\n";;
    } else {
        cout << closest_square + diff << "\n";
    }
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