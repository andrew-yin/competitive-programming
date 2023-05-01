#include <bits/stdc++.h>
using namespace std;

#define LL long long

const int N = 1E5;
int a[N];

void solve() {
    int n, c, d; cin >> n >> c >> d;
    set<int> ct;
    
    LL min_cost = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (ct.count(a[i])) {
            min_cost += c;
        }
        else {
            ct.insert(a[i]);
        }
    }
    
    LL ans = 1LL*n*c + d;
    int i = 0;
    int m = ct.size();
    for (const int &j: ct) {
        LL cost = min_cost + 1LL*(m-1 - i)*c + 1LL*(j-1 - i)*d;
        ans = min(ans, cost);
        i++;
    }
    cout << ans << "\n";
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
