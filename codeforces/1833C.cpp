#include <bits/stdc++.h>
using namespace std;

#define LL long long

bool test(const vector<int> &a, int parity) {
    int has_odd = false;

    for (const int& i: a) {
        if (i % 2 == parity) {
            if (i % 2) has_odd = true;
            continue;
        }

        if (!has_odd) return false;

        if (i % 2) has_odd = true;
    }
    return true;
}


void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    if (!test(a, 0) && !test(a, 1)) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
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
