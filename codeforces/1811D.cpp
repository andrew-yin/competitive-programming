#include <bits/stdc++.h>
using namespace std;

#define LL long long

const int N = 45;
LL f[N+1];

void build() {
    f[0] = 1;
    f[1] = 1;
    for (int i = 2; i <= N; i++) {
        f[i] = f[i-1] + f[i-2];
    }
}

bool possible(int n, LL x, LL y) {
    if (n == 1) return true;
    if (f[n] >= y && y > f[n-1]) return false;

    if (f[n] >= y) {
        return possible(n-1, y, f[n] - x + 1);
    } 
    else {
        return possible(n-1, y - f[n], f[n] - x + 1);
    }
}


void solve() {
    int n; LL x, y; cin >> n >> x >> y;
    cout << (possible(n, x, y) ? "YES\n" : "NO\n");
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    build();   
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
