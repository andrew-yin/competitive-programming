#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    unsigned long long n, k, x; cin >> n >> k >> x;
    unsigned long long a = (k*(k+1))/2;
    unsigned long long b = (n*(n+1))/2 - ((n-k)*(n-k+1))/2;
    cout << ((a <= x && x <= b) ? "YES\n": "NO\n");
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
