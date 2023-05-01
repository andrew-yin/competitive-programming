#include <bits/stdc++.h>
using namespace std;

#define LL long long

void solve() {
    int n; cin >> n;
    if (n % 2 == 0) {
        cout << "No\n";
        return;
    }

    cout << "Yes\n";

    int s = 3*(n+1)/2;
    for (int i = 1; i <= n; i += 2) {
        cout << i << " " << s-i << "\n";
        s++;
    }

    for (int i = 2; i <= n-1; i += 2) {
        cout << i << " " << s-i << "\n";
        s++;
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
