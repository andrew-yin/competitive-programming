#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int N = 2E5;
int x[N];

void solve() {
    int n; cin >> n;
    map<int, int> count;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        count[x[i]]++;
    }

    int m = count.size();
    vector<int> a(m);
    int i = 0;
    for (auto &j: count) {
        a[i] = j.first;
        i++;
    }

    vector<ll> p(m); p[0] = count[a[0]];
    for (int i = 1; i < m; i++) {
        p[i] = count[a[i]]+p[i-1];
    }

    vector<ll> s(m); s[m-1] = count[a[m-1]];
    for (int i = m-2; i >= 0; i--) {
        s[i] = count[a[i]]+s[i+1];
    }

    ll l = 0;
    ll r = 0;
    for (int j = 1; j < m; j++) {
        r += s[j]*(a[j]-a[j-1]);
    }

    unordered_map<int, ll> ans(m); ans[a[0]] = r + s[0];
    for (int i = 1; i < m; i++) {
        r -= s[i]*(a[i] - a[i-1]);
        l += p[i-1]*(a[i] - a[i-1]);

        ans[a[i]] = r + l + s[0];
    }

    for (int i = 0; i < n; i++) {
        cout << ans[x[i]] << " ";
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
