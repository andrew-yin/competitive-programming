#include <bits/stdc++.h>
using namespace std;

#define LL long long

const string S = "FBFFBFFBFBFFBFFBFBFFBFFB";

void solve() {
    int k; cin >> k;
    string s; cin >> s;

    for (int i = 0; i < S.size()-k; i++) {
        if (s == S.substr(i, k)) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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
