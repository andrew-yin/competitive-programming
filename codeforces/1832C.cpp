#include <bits/stdc++.h>
using namespace std;

#define LL long long

void solve() {
    int n; cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int j; cin >> j;
        if (a.size() == 0 || a.back() != j) {
            a.push_back(j);
        }
    }

    int ans = 0;
    for (int i = 0; i < a.size(); i++) {
        if (i == 0 || i == a.size()-1) {
            ans++;
        }
        else if (a[i-1] < a[i] && a[i] > a[i+1]) {
            ans++;
        }
        else if (a[i-1] > a[i] && a[i] < a[i+1]) {
            ans++;
        }
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
