#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll l, r;

void update1(ll a, ll b, ll n) {
    ll new_l = n == 1 ? 1 : a + (a-b)*(n-2) + 1;
    ll new_r = a + (a-b)*(n-1);

    if (new_l > r || new_r < l) {
        cout << "0 ";
    }
    else {
        cout << "1 ";
        l = max(l, new_l);
        r = min(r, new_r);
    }
}

void update2(ll a, ll b) {
    if (a >= r) {
        cout << "1 ";
        return;
    }

    ll days = (r - a + (a - b - 1))/(a - b) + 1;
    ll m = a + (a - b)*(days - 1);
    if (m - (a - b) >= l) {
        cout << "-1 ";
        return;
    }
    cout << days << " ";
}

void solve() {
    int q; cin >> q;
    l = 1; r = LLONG_MAX;

    for (int _ = 0; _ < q; _++) {
        int e; cin >> e;
        if (e == 1) {
            ll a, b, n; cin >> a >> b >> n;
            update1(a, b, n);
        }
        else {
            ll a, b; cin >> a >> b;
            update2(a, b);
        }
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
