#include <bits/stdc++.h>
using namespace std;

#define LL long long

void solve() {
    int n, m; cin >> n >> m;
    
    if (m == 1) {
        cout << "YES\n";
        return;
    }
    
    if (m == 2) {
        if (n % 2) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
        return;
    }
    
    // m > 2
    
    if (n == 1) {
        cout << "YES\n";
        return;
    }
    
    if (n % 2 == 0) {
        cout << "NO\n";
        return;
    }
    
    if (n <= m) {
        cout << "NO\n";
        return;
    }
    
    if (n % m == 0) {
        cout << "NO\n";
        return;
    }
    
    for (LL i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            if (i <= m || n/i <= m) {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
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

/*

m = 1 -> ends no matter what
m = 2 -> ends iff n is odd

// assumption: n is odd, n > m, so getting down to 2 or 1 ends
m = 3:
    n = 5 -> 1, 2 so ends
    n = 7 -> 1, 2 so ends
    ... ends
m = 4:
    n = 5 -> 1, 2, so ends
    n = 7 -> 3, 1, so ends
    n = 9 -> 2, 1, 3
    ends
m = 5:
    n = 7 
    
*/
