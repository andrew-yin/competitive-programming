#include <bits/stdc++.h>
using namespace std;

void solve() {
    unsigned long long n, W; cin >> n >> W;

    vector<int> w(n);
    
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }

    unsigned long long lower = (W % 2) ? (W/2 + 1) : W/2;
    for (int i = 0; i < n; i++) {
        if (w[i] >= lower && w[i] <= W) {
            cout << "1\n" << i+1 << "\n";
            return;
        }
    }


    unsigned long long tot = 0;
    int i = 0;
    vector<int> ans;
    while (tot < lower && i < n) {
        if (w[i] <= W) {
            tot += w[i];
            ans.push_back(i+1);
        }
        i++;
    }

    if (tot < lower) {
        cout << "-1\n";
        return;
    }
    
    cout << ans.size() << "\n";
    for (int j : ans) {
        cout << j << " ";
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
