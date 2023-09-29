#include <bits/stdc++.h>
using namespace std;

#define LL long long

LL b[100*100];

void solve() {
    LL n, m; cin >> n >> m;
    for (int i = 0; i < n*m; i++) {
        cin >> b[i];
    } 
    sort(b, b+n*m);
    
    // always have n >= m
    if (m > n) {
        swap(n, m);
    }
    
    int ans;
    if (m == 1) {
        ans = (b[n*m-1] - b[0])*(n-1);
    } 
    else {
        ans = max(
            (b[n*m-1] - b[0])*(n-1)*m + (b[n*m-2] - b[0])*(m-1),
            (b[n*m-1] - b[0])*(n-1)*m + (b[n*m-1] - b[1])*(m-1)
        );
    }
    cout << ans << "\n";
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
