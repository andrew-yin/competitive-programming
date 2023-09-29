#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;

    set<int> missing;
    for (int i = 0; i <= n+1; i++) {
        missing.insert(i);
    }

    set<int> a;
    for (int i = 0; i < n; i++) {
        int j; cin >> j;
        a.insert(j);
        missing.erase(j);
    }

    int turn = 0;
    for (; turn < n; turn++) {
        int x = *missing.begin();
        cout << x << endl;
        a.insert(x);
        missing.erase(x);

        int y; cin >> y;
        if (y == -1 || y == -2) {
            break;
        }

        a.erase(y);
        missing.insert(y);
    }

    if (turn == n) {
        cout << *missing.begin() << endl;
        int y; cin >> y;
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
