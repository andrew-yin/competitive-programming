#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;

    vector<int> picked(n+1, 0);
    for (int i = 1; i <= n; i++) {
        if (picked[i]) {
            continue;
        }

        for (int j = i; j <= n; j *= 2) {
            cout << j << " ";
            picked[j] = 1;
        }
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
