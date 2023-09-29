#include <bits/stdc++.h>
using namespace std;

#define LL long long

void solve() {
    int n; string s;
    cin >> n >> s;

    int ans = -1;
    int last = -1;
    int cur = 1;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i-1]) {
            cur++;
        } 
        else {
            if (last == -1) {
                ans = cur + 1;
            }
            else {
                ans = max(ans, cur + 1);
            }
            last = cur;
            cur = 1;
        }
    } 
    if (last == -1) {
        ans = cur + 1;
    }
    else {
        ans = max(ans, cur + 1);
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
