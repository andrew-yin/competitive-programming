// Author: Andrew Yin
// Date: Summer 2021

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, m; cin >> n >> k >> m;
    int sum = 0;
    for (int i = 0; i < n-1; i++) {
        int j; cin >> j;
        sum += j;
    }
    
    int ans = n*m - sum;
    if (ans > k) {
        cout << "-1";
    }
    else if (ans < 0) {
        cout << "0";
    }
    else {
        cout << ans;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
