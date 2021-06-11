// Author: Andrew Yin
// Date: Summer 2021

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;

    int cur_min = INT_MAX;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int j; cin >> j;
        if (j < cur_min) {
            ans++;
            cur_min = j;
        }
    }

    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
