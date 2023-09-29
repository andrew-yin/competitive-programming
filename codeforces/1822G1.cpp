#include <bits/stdc++.h>
using namespace std;

#define LL long long

const int N = 2E5;
const int A = 1E6;
int a[N];
int ct[A+1];

void solve() {
    int n; cin >> n;
    
    int m = -1;
    memset(ct, 0, sizeof(ct));
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m = max(m, a[i]);
        ct[a[i]]++;
    }

    LL ans = 0;
    for (int i = 0; i < n; i++) {
        ans += 1LL*(ct[a[i]]-1)*(ct[a[i]]-2);
        for (int j = 2; j*j*a[i] <= m; j++) {
            ans += 1LL*ct[a[i]*j]*ct[a[i]*j*j];
        }
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
