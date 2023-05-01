#include <bits/stdc++.h>
using namespace std;

#define LL long long

void solve() {
    int n; cin >> n;
    if (n == 1) {
        cout << "1\n"; return;
    }

    if (n & 1) {
        cout << "-1\n"; return;
    } 
    
    int j = 1;
    for (int i = 1; i <= n/2; i++) {
        cout << (n + 1 - j) << " " << j << " ";
        j += 2;
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
