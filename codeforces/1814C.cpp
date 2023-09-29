#include <bits/stdc++.h>
using namespace std;

#define LL long long

void solve() {
    int n, s1, s2;
    cin >> n >> s1 >> s2;

    vector<pair<int, int>> r;
    for (int i = 1; i <= n; i++) {
        int j; cin >> j;
        r.push_back(pair<int, int>(i, j));
    }
    sort(r.begin(), r.end(), [](auto &left, auto &right) {
        return left.second > right.second;
    });

    LL wait1 = s1, wait2 = s2;
    vector<int> a, b;
    for (int i = 0; i < r.size(); i++) {
        int box = r[i].first;
        if (wait1 < wait2) {
            a.push_back(box);
            wait1 += s1;
        }
        else {
            b.push_back(box);
            wait2 += s2;
        }
    }
    
    cout << a.size() << " ";
    for (int &i : a) {
        cout << i << " ";
    }
    cout << "\n" << b.size() << " ";
    for (int &i: b) {
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
