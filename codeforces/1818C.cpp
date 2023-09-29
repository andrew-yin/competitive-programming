#include <bits/stdc++.h>
using namespace std;

#define LL long long

const int N = 2E5 + 1;
int a[N];

int inner[N];
int inner_ps[N];
int ans[N];

void solve() {
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 2; i <= n - 1; i++) {
        if (a[i - 1] >= a[i] && a[i] >= a[i + 1]) {
            inner[i] = 1;
        } else {
            inner[i] = 0;
        }
    }

    inner_ps[1] = inner[1];
    for (int i = 2; i <= n; i++) {
        inner_ps[i] = inner[i] + inner_ps[i - 1];
    }

    // queries
    for (int i = 1; i <= q; i++) {
        int l, r;
        cin >> l >> r;

        if (r - l <= 1) {
            ans[i] = r - l + 1;
            continue;
        }

        int inner_ct = inner_ps[r - 1] - inner_ps[l];
        ans[i] = (r - l + 1) - inner_ct;
    }

    for (int i = 1; i <= q; i++) {
        cout << ans[i] << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}
