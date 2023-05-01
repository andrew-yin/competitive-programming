#include <bits/stdc++.h>
using namespace std;

const int N = 3E5;
int a[N];

void solve() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n & 1) {
        cout << "YES\n";
        return;
    }

    long long sum = 0;
    for (int i = 0; i < n; i += 2) {
        sum += a[i+1] - a[i];
    }    
    if (sum >= 0) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
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
