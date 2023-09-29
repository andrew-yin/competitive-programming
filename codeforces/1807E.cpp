#include <bits/stdc++.h>
using namespace std;

#define LL long long

const int N = 2E5;

LL a[N+1];
LL p[N+1];

LL ask(int l, int r) {
    cout << "? " << (r-l+1) << " ";
    for (int i = l; i <= r; i++) {
        cout << i << " ";
    }
    cout << endl;
    
    LL weight; cin >> weight;
    return weight;
}


void solve() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    p[0] = 0;
    p[1] = a[1];
    for (int i = 2; i <= n; i++) {
        p[i] = a[i] + p[i-1];
    }

    int l = 1, r = n;    
    while (l <= r) {
        if (l == r) {
            cout << "! " << l << endl;
            return;
        }

        int m = l + (r-l)/2;
        LL weight = ask(l, m);
        LL expected = p[m] - p[l-1];

        if (weight > expected) {
            r = m;
        }
        else {
            l = m+1;
        }
    }
    return;
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
