#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, x, y; cin >> n >> m >> x >> y;

    int two_cost = min(y, 2*x);
    int price = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < m; j++) {
            char k; cin >> k;
            if (k == '.') {
                count++;
            }
            else {
                price += (count/2 * two_cost);
                if (count % 2) {
                    price += x;
                }
                count = 0;
            }
        }

        if (count > 0) {
            price += (count/2 * two_cost);
            if (count % 2) {
                price += x;
            }
        }
    }
    cout << price << "\n";
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
