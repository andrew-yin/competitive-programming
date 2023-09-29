#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int N = 2E5;
int a[N];
int n, t[4*N];

void build(int a[], int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        t[v] = t[v*2] & t[v*2+1];
    }
}

int get_and(int v, int tl, int tr, int l, int r) {
    if (l > r) {
        return INT_MAX;
    }
    if (l == tl && r == tr) {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    int s = (get_and(v*2, tl, tm, l, min(r, tm))) & (get_and(v*2+1, tm+1, tr, max(l, tm+1), r));
    return s;
}

void solve() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    build(a, 1, 0, n-1);
    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int l, k; cin >> l >> k;
        int left = l-1;
        l--;
        int r = n-1;
        int ans = -2;
        while (l <= r) {
            int m = l + (r-l)/2;
            int s = get_and(1, 0, n-1, left, m);
            // cout << "trying m=" << m << "\n";
            if (get_and(1, 0, n-1, left, m) >= k) {
                ans = max(ans, m);
                l = m+1;
            }
            else {
                r = m-1;
            }
        }
        cout << ans+1 << " ";
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
