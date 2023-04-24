#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    s += s;
    long long maxi = 0;
    long long cur = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') {
            cur = 0;
        }
        else {
            cur++;
        }
        maxi = max(maxi, cur);
    }
    if (maxi == s.size()) {
        cout << maxi/2 * maxi/2 << "\n";
    }
    else {
        cout << (maxi + 1)/2 * (maxi/2 + 1) << "\n";
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
