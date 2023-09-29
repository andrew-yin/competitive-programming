#include <bits/stdc++.h>
using namespace std;

#define LL long long

const int N = 2E5+1;

int p[N];

void solve() {
    int n, k; cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    } 
    
    int mismatch1_num = 0;
    int mismatch1_idx = 0;
    int mismatch2_num = 0;
    int mismatch2_idx = 0;
    for (int i = 1; i <= k; i++) {
        for (int j = i; j <= n; j += k) {
            if (p[j] % k != i % k) {
                if (mismatch1_num == 0) {
                    mismatch1_num = p[j];
                    mismatch1_idx = j;
                }
                else if (mismatch2_num == 0) {
                    mismatch2_num = p[j];
                    mismatch2_idx = j;                    
                }
                else {
                    cout << "-1\n"; return;
                }
            }
        }
    }
    
    if (mismatch1_num == 0) {
        cout << "0\n";
    }
    else if (mismatch1_num % k == mismatch2_idx % k && mismatch2_num % k == mismatch1_idx % k) {
        cout << "1\n";
    }
    else {
        cout << "-1\n";
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
