#include <bits/stdc++.h>
using namespace std;

#define LL long long

void solve() {
    int n; cin >> n;
    if (n == 1) {
        cout << "1\n";
        return;
    }
    if (n % 2) {
        cout << "-1\n";
        return;
    }

    int o = 1, e = 2;
    int even = true;
    for (int i = 0; i < n; i++) {
        if (even) {
            cout << e << " ";
            e += 2;
        }
        else {
            cout << o << " ";
            o += 2;
        }
        even = !even;
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
