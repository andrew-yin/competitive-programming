#include <bits/stdc++.h>
using namespace std;

#define LL long long

vector<int> compute(int n, int k) {
    if (k <= n) {
        vector<int> ans(n);
        for (int i = 0; i < k-1; i++) {
            ans[i] = -1;
        }
        ans[k-1] = k;
        if (k <= n-1) {
            ans[k] = -(k+1);
        }
        for (int i = k+1; i < n; i++) {
            ans[i] = -1;
        }
        return ans;
    }
    
    vector<int> ans = compute(n-1, k-n);
    ans.push_back(1000);
    return ans;
}


void solve() {
    int n, k; cin >> n >> k;
    vector<int> ans = compute(n, k);
    for (int &i : ans) {
        cout << i << " ";
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
