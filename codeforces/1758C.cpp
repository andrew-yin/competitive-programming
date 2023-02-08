#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, x; cin >> n >> x;

    vector<int> permutation(n+1);
    for (int i = 1; i <= n; i++) {
        permutation[i] = i;
    }

    int val = x;
    vector<int> order; order.push_back(x);
    while (val < n) {
        bool found = false;
        for (int i = 2; val*i <= n; i++) {
            if (n % (val*i) == 0) {
                order.push_back(val*i);
                val *= i;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "-1\n";
            return;
        }
    }

    for (int i = order.size(); i > 0; i--) {
        permutation[order[i-1]] = order[i];
    }
    permutation[1] = x;
    permutation[n] = 1;

    for (int i = 1; i <= n; i++) {
        cout << permutation[i] << " ";
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
