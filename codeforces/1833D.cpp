#include <bits/stdc++.h>
using namespace std;

#define LL long long

void print(const vector<int> &p, int n, int l, int r) {
    for (int i = r+1; i < n; i++) {
        cout << p[i] << " ";
    }
    for (int i = r; i >= l; i--) {
        cout << p[i] << " ";
    }
    for (int i = 0; i < l; i++) {
        cout << p[i] << " ";
    }
    cout << "\n";
}

void solve() {
    int n; cin >> n;
    vector<int> p(n);

    int r = -1;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        if (i > 0 && (r == -1 || p[i] > p[r])) {
            r = i;
        }
    }

    if (n == 1) {
        for (const int& i: p) cout << i << " ";
        cout << "\n";
        return;
    }
    if (r == n-1) {
        if (p[r-1] < p[0]) {
            print(p, n, r, r);
            return;
        }
    }
    if (p[0] == n) {
        print(p, n, r-1, r-1);
        return;
    }

    r--;
    int l = r;
    while (l > 0 && p[l-1] > p[0]) {
        l--;
    }
    print(p, n, l, r);
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
