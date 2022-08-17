#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    // start with 10101...
    int zeropair_ct = 0;
    int onepair_ct = 0;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i-1]) {
            if (s[i] == '1') {
                onepair_ct++;
            }
            else {
                zeropair_ct++;
            }
        }
    }
    cout << max(onepair_ct, zeropair_ct) << "\n"; 
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
