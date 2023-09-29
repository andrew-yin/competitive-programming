#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll M = 998244353;

ll ipow(ll b, ll e) {
    ll r = 1;
    for (;;) {
        if (e & 1) {
            r = (r*b) % M;
        }
        e >>= 1;
        if (!e) {
            break;
        }
        b = (b*b) % M;
    }
    return r;
}

void solve() {
    ll n; cin >> n;

    ll ans = 1;
    for (ll i = 1; i <= n/6; i++) {
        ans = (ans * (i + n/6)) % M;
        ans = (ans *ipow(i, M-2)) % M;
    }

    for (int i = 0; i < n/3; i++) {
        vector<int> edges(3);
        for (int j = 0; j < 3; j++) {
            cin >> edges[j];
        }

        if (edges[0] == edges[1] && edges[1] == edges[2]) {
            ans = (ans * 3) % M;
        }
        else if (count(edges.begin(), edges.end(), *min_element(edges.begin(), edges.end())) == 2) {
            ans = (ans * 2) % M;
        }
    }

    cout << ans << "\n";
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}
