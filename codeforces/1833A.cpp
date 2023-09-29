#include <bits/stdc++.h>
using namespace std;

#define LL long long

int n;
string s;
set<string> seen;

void solve() {
    seen.clear();
    cin >> n >> s;
    for (int i = 0; i < n-1; i++) {
        seen.insert(string(s[i], s[i+1]));
    }
    cout << seen.size() << "\n";
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
