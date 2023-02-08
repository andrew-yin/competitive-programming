#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long h, c, t; cin >> h >> c >> t;

    if (t == h || t == c) {
        cout << "1\n";
        return;
    }
    if (h - t >= t - c) {
        cout << "2\n";
        return;
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

