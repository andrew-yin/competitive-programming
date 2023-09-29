#include <bits/stdc++.h>
using namespace std;

#define LL long long

int n, k;
string s, t;

void solve() {
    cin >> n >> k >> s >> t;

    vector<int> c(26, 0);
    for (int i = 0; i < n; i++) {
        if (i < k && i + k >= n) {
            if (s[i] != t[i]) {
                cout << "NO\n";
                return;
            }
        }
        else {
            c[s[i] - 'a']++;
            c[t[i] - 'a']--;
        }
    } 
    cout << (count(c.begin(), c.end(), 0) == 26 ? "YES\n" : "NO\n");
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
