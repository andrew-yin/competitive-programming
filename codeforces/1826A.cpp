#include <bits/stdc++.h>
using namespace std;

#define LL long long

void solve() {
    int n; cin >> n;
    
    unordered_map<int, int> ct;
    int j;
    for (int i = 0; i < n; i++) {
        cin >> j;
        ct[j]++;
    }
    
    for (int i = 0; i <= n; i++) {
        int tot = 0;
        for (int j = 0; j <= i; j++) {
            tot += ct[j];
        }
        if (tot == n - i) {
            cout << i << "\n";
            return;
        }
    }
    cout << "-1\n";
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
