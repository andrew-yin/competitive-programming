// Author: Andrew Yin
// Date: Summer 2021

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string p, q;
    for (int i = 0; i < n; i++) {
        char j; cin >> j;
        p.push_back(j);
    }
    for (int i = 0; i < n; i++) {
        char j; cin >> j;
        q.push_back(j);
    }

    string start;
    for (int i = 0; i < n; i++) {
        char j = '1' + i;
        start.push_back(j);
    }

    int p_count = 0, q_count = 0;
    int count = 1;
    bool p_done = false, q_done = false;
    do {
        if (start == p) {
            p_count = count;
            p_done = true;
        }
        if (start == q) {
            q_count = count;
            q_done = true;
        }
        count++;
    }
    while (next_permutation(start.begin(), start.end()) && (!p_done || !q_done));

    int ans = q_count > p_count ? q_count - p_count : p_count - q_count;
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
