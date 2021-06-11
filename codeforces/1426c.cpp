// Author: Andrew Yin
// Date: sometime during Summer 2021
 
#include  <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n; cin >> n;
    
    int s = 1;
    while (s*s < n) {
        s += 1;
    }
    
    if (s*(s-1) >= n) {
        cout << 2*s - 3 << "\n";
    }
    else {
        cout << 2*s - 2 << "\n";
    }
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
 
    return 0;
}