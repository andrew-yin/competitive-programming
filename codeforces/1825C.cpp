#include <bits/stdc++.h>
using namespace std;

#define LL long long

const int M = 1E5+1;

int assigned[M];
int assigned_pre[M];
int assigned_suf[M];

void solve() {
    int n, m; cin >> n >> m;
    int lct = 0, rct = 0, act = 0; // left, right, assigned count
    memset(assigned, 0, sizeof(assigned));
    memset(assigned_pre, 0, sizeof(assigned_pre));
    memset(assigned_suf, 0, sizeof(assigned_suf));

    int j;
    for (int i = 0; i < n; i++) {
        cin >> j;
        if (j == -1) {
            lct++;
        }
        else if (j == -2) {
            rct++;
        }
        else {
            if (!assigned[j]) {
                assigned[j] = 1;
                act++;
            }
        }
    }
    
    assigned_pre[1] = assigned[1];
    for (int i = 1; i <= m; i++) {
        assigned_pre[i] = assigned_pre[i-1] + assigned[i];
    }

    int ans = max(min(m, lct+act), min(m, rct+act));
    for (int i = 1; i <= m; i++) {
        if (!assigned[i]) continue;

        int to_left = assigned_pre[i-1];
        int to_right = assigned_pre[m] - assigned_pre[i];
        ans = max(ans, 1 + min(i - 1, to_left+lct) + min(m - i, to_right+rct));
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
