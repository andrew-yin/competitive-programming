#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    map<int, int> counts;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        counts[x]++;
    }

    set<int> candidates;
    for (auto& i : counts) {
        if (i.second >= k) {
            candidates.insert(i.first);
        }
    }
    if (candidates.size() == 0) {
        cout << "-1\n";
        return;
    }

    int ans = -1; int l = -1; int r = -1;
    for (int i : candidates) {
        if (!candidates.count(i-1)) {
            int curNum = i;
            int curStreak = 1;
            while (candidates.count(curNum+1)) {
                curNum += 1;
                curStreak += 1;
            }

            if (curStreak > ans) {
                l = i;
                r = curNum;
                ans = curStreak;
            }
        }
    }

    if (ans != -1) {
        cout << l << " " << r << "\n";
    }
    else { 
        cout << "-1\n";
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while (t--) {
        solve();
    }
}