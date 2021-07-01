// Author: Andrew Yin
// Date: Summer 2021

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n, q;
ll roots[200000];
unordered_set<ll> a;

void solve() {
    ll x; cin >> x;
    if (x < roots[0]) {
        if (n % 2) {
            cout << "NEGATIVE\n";
        }
        else {
            cout << "POSITIVE\n";
        }
        return;
    }
    if (x > roots[n-1]) {
        cout << "POSITIVE\n";
        return;
    }
    if (a.count(x)) {
        cout << "0\n";
        return;
    }

    int l = 0, r = n-1;
    while (l <= r) {
        int m = (l + r)/2;
        if (roots[m] >= x) {
            r = m-1;
        }
        else {
            l = m+1;
        }
    }

    int negative_count = n - l;
    if (negative_count % 2) {
        cout << "NEGATIVE\n";
    }
    else {
        cout << "POSITIVE\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> q;
    for (int i = 0; i < n; i++) {
        cin >> roots[i];
        a.insert(roots[i]);
    }
    sort(roots, roots+n);
    for (int i = 0; i < q; i++) {
        solve();
    }


    return 0;
}
