// Author: Andrew Yin
// Date: sometime during Summer 2021
 
#include  <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, x;
    cin >> n >> x;
    if (n <= 2) {
        cout << "1\n";
        return;
    }
 
    n = n - 2;
    int rem = n % x;
    if (rem == 0) {
        cout << n/x + 1 << "\n";
    }
    else {
        cout << n/x + 2 << "\n";
    }
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}