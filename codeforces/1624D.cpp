#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;

    unordered_map<char, int> letter_ct;
    for (char &c: s) {
        letter_ct[c]++;
    }

    int pairs = 0;
    for (auto &i: letter_ct) {
        int ct = i.second;
        pairs += ct/2;
    }
    int ans = pairs/k * 2;
    if (n - ans*k >= k) {
        ans++;
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
