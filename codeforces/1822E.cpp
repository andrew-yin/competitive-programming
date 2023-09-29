#include <bits/stdc++.h>
using namespace std;

#define LL long long

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    if (n & 1) {
        cout << "-1\n";
        return;
    }

    int count[26] = {0}; 
    int total_pairs = 0;
    int pairs[26] = {0};
    for (int i = 0; i < n/2; i++) {
        count[s[i] - 'a']++;
        count[s[n-i-1] - 'a']++;
        
        if (s[i] == s[n-i-1]) {
            total_pairs++;
            pairs[s[i] - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] > n/2) {
            cout << "-1\n";
            return;
        }
    }

    int ans = (total_pairs + 1)/2;
    for (char i = 0; i < 26; i++) {
        ans = max(ans, pairs[i]);
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
