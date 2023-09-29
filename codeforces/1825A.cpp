#include <bits/stdc++.h>
using namespace std;

#define LL long long

void solve() {
    string s; cin >> s;
    if (unordered_set<char>(s.begin(), s.end()).size() == 1) {
        cout << "-1\n";
        return;
    };
    cout << s.size()-1 << "\n";
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
