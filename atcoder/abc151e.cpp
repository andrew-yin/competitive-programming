// Author: Andrew Yin
// Date: Summer 2021

#include <bits/stdc++.h>
using namespace std;

long long M = 1000000007;

int n, k;
vector<long long> A;

long long combo(int n, int k) {
    long long res = 1;
 
    if (k > n - k)
        k = n - k;
 
    // Calculate value of
    // [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]
    for (int i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
 
    return res;
}

void solve() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        long long j; cin >> j;
        A.push_back(j);
    }
    sort(A.begin(), A.end());    

    if (k == 1) {
        cout << "0\n";
        return;
    }

    long long ans = 0;
    for (int i = 0; i < n - k + 1; i++) {
        long long min = A[i];
        for (int j = i + k - 1; j < n; j++) {
            long long max = A[j];
            int between = j - i - 1;
            ans = (ans + (max - min)*combo(between, k-2)) % M;
        }
    }

    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
