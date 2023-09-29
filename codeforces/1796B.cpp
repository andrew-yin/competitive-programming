#include <bits/stdc++.h>
using namespace std;

#define LL long long

string a, b;

void solve() {

    cin >> a >> b;
    if (a[0] == b[0]) {
        cout << "YES\n" << a[0] << "*\n"; return;
    }
    if (a[a.size()-1] == b[b.size()-1]) {
        cout << "YES\n*" << a[a.size()-1] << "\n"; return;
    }

    set<string> seen;
    for (int i = 0; i < a.size()-1; i++) {
        seen.insert(a.substr(i, 2));
    }

    for (int i = 0; i < b.size()-1; i++) {
        if (seen.count(b.substr(i, 2))) {
            cout << "YES\n*" << b.substr(i, 2) << "*\n"; return;
        }
    }
    cout << "NO\n";
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
