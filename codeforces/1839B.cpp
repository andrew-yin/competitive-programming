#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;

    map<int, vector<int>> lamps;
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        lamps[a].push_back(-b);
    }
    for (auto &i : lamps) {
        sort(i.second.begin(), i.second.end());
    }
    
    int on = 0, ans = 0;
    for (auto i : lamps) {
        int take = min((int) i.second.size(), i.f 
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
