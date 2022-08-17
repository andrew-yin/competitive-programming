#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    unsigned long long ans = n; 

    for (int i = 1; i < n; i++) {
        if (s[i] != s[i-1]) {
            ans += i;
        }
    }

    cout << ans << "\n"; 
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
