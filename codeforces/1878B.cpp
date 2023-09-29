#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    
    int x = 5;
    for (int i = 0; i < n; i++) {
        cout << x << " ";
        x++;
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
