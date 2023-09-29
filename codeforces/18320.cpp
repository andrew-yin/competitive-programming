#include <bits/stdc++.h>
using namespace std;

#define LL long long

void solve() {
    string s; cin >> s;
    
    bool has_char[26] = {0};
    for (int i = 0; i < s.size()/2; i++) {
        has_char[s[i] - 'a'] = true;
    } 

    int ans = 0;
    for (int i = 0; i < 26; i++) {
        ans += has_char[i];
    }
    cout << (ans > 1 ? "YES\n" : "NO\n");
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
