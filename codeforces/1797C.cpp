#include <bits/stdc++.h>
using namespace std;

#define LL long long

int n, m;

void solve() {
    cin >> n >> m;

    int away; 
    cout << "? 1 1" << endl;
    cin >> away;
    
    if (away == 0) {
        cout << "! 1 1" << endl;
        return;
    }
    
    int x = min(n, 1 + away), y = min(m, 1 + away);
    cout << "? " << x << " " << y << endl;
    cin >> away;
    
    if (away == 0) {
        cout << "! " << x << " " << y << endl;
        return;
    } 
    

    x = x - away;
    int x2 = x + away, y2 = y - away;
    cout << "? " << x << " " << y << endl;
    cin >> away;
    if (away == 0) {
        cout << "! " << x << " " << y << endl;
    }
    else {
        cout << "! " << x2 << " " << y2 << endl;
    }
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
