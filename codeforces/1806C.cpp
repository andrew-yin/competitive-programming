#include <bits/stdc++.h>
using namespace std;

#define LL long long

const int N = 2E5;

int p[2*N];

void solve() {
    int n; cin >> n;
    for (int i = 0; i < 2*n; i++) {
        cin >> p[i];
    }

    if (n == 1) {
        cout << abs(p[1] - p[0]) << "\n"; return;
    }

    LL ans1 = 0, S = 0;
    for (int i = 0; i < 2*n; i++) {
        ans1 += abs(p[i]);
        S += abs(p[i] + 1);
    }
    if (n % 2) {
        cout << ans1 << "\n"; return;
    }

    LL ans2 = S - abs(p[0] + 1) + abs(p[0] - n);
    for (int i = 1; i < 2*n; i++) {
        ans2 = min(ans2, S - abs(p[i] + 1) + abs(p[i] - n));
    }

    if (n == 2) {
        LL ans3 = 0;
        for (int i = 0; i < 2*n; i++) {
            ans3 += abs(p[i] - 2);
        }
        cout << min(min(ans1, ans2), ans3) << "\n";
    }
    else {
        cout << min(ans1, ans2) << "\n";
    }
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
