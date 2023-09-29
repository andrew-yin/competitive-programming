#include <bits/stdc++.h>
using namespace std;

#define LL long long

LL powi (LL base, LL exp) {
    LL res = 1;
    while (exp) {
        if (exp & 1)
            res *= base;
        exp >>= 1;
        base *= base;
    }
    return res;
}

void solve() {
    LL k; cin >> k;

    vector<int> ans(13, 0);
    while (k > 0) {
        LL digit = 0;
        LL num = 1;
        while (num*9 <= k) {
            num *= 9;
            digit++;
        }

        ans[digit]++;
        k -= num;
    }

    bool start = false;
    for (int i = 12; i >= 0; i--) {
        if (ans[i] == 0 && !start) {
            continue;
        }

        start = true;
        if (ans[i] >= 4) {
            cout << ans[i]+1;
        }
        else {
            cout << ans[i];
        }
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
