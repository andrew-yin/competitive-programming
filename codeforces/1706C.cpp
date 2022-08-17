#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> h(n);

    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    long long cost = 0;
    for (int i = 1; i <= n-2; i += 2) {
        cost += max(max(h[i-1], h[i+1]) + 1 - h[i], 0);
    }

    long long last_cost = cost;
    if (n % 2 == 0) {
        for (int i = n-3; i >= 1; i -= 2) {
            long long next_cost = last_cost - max(max(h[i-1], h[i+1]) + 1 - h[i], 0) + max(max(h[i], h[i+2]) + 1 - h[i+1], 0);
            cost = min(cost, next_cost);
            last_cost = next_cost;
        }
    }
    cout << cost << "\n";
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