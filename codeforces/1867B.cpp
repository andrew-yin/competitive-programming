#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    int same = 0; int diff = 0;
    for (int i = 0; i < n/2; i++) {
        if (s[i] == s[n-i-1]) {
            same++;
        }
        else {
            diff++;
        }
    }

    vector<int> ans(n+1, 0);
    for (int i = 0; i <= same; i++) {
        ans[diff + i*2] = 1;
        if (n % 2 && (diff + i*2 < n)) {
            ans[diff + i*2 + 1] = 1;
        }
    }

    for (int i = 0; i < n+1; i++) {
        cout << ans[i];
    }
    cout << "\n";
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
