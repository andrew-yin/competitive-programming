#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<long long> pos;
    vector<long long> neg;
    for (int i = 0; i < n; i++) {
        long long j; cin >> j;
        if (j >= 0) {
            pos.push_back(j);
        }
        else if (j < 0) {
            neg.push_back(j);
        }
    }
    sort(pos.begin(), pos.end());
    sort(neg.begin(), neg.end());

    if (pos.size() > 1 && neg.size() > 1) {
        cout << max(*pos.rbegin() * *(++pos.rbegin()), *neg.begin() * *(++neg.begin())) << "\n";
    }
    else if (pos.size() <= 1 && neg.size() > 1) {
        cout << *neg.begin() * *(++neg.begin()) << "\n";
    }
    else if (pos.size() > 1 && neg.size() <= 1) {
        cout << *pos.rbegin() * *(++pos.rbegin()) << "\n";
    }
    else {
        cout << *pos.begin() * *neg.begin() << "\n";
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
