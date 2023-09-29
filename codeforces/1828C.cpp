#include <bits/stdc++.h>
using namespace std;

#define LL long long

const int N = 2E5;
const LL M = 1E9+7;
int a[N];
int b[N];

void solve() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(a, a+n); sort(b, b+n);

    int j = n;
    LL ans = 1;
    for (int i = n-1; i >= 0; i--) {
        while (j > 0 && a[j-1] > b[i]) {
            j--;
        }
        ans = (ans * 1LL*((n - j) - (n-1 - i))) % M;
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
