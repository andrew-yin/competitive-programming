// Author: Andrew Yin
// Date: sometime during Summer 2021
 
#include  <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, m; 
    cin >> n >> m;
    
    int a[100];
    int b[100];
    int c[100];
    int d[100];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    
    if (m % 2 != 0) {
        cout << "NO\n";
        return;
    }
 
    for (int i = 0; i < n; i++) {
        if (b[i] == c[i]) {
            cout << "YES\n";
            return;
        }
    }
    
    cout << "NO\n";
    return;
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