#include <bits/stdc++.h>
using namespace std;

#define LL long long


void solve() {
    string s; cin >> s;
    unordered_set<char> unique(s.begin(), s.end());
    int ans = -1;
    for (char i = 'a'; i <= 'z'; i++) {
        if (!unique.count(i)) {
            continue;
        }
        int maxi = 0;
        int cur = 0;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == i) {
                if (cur > 0) {
                    int turns = 0;
                    while (1 << turns <= cur) {
                        turns++;
                    }
                    maxi = max(maxi, turns);
                }
                cur = 0;
            } 
            else {
                cur++;
            }
        }
        if (cur > 0) {
            int turns = 0;
            while (1 << turns <= cur) {
                turns++;
            }
            maxi = max(maxi, turns);
        }
        ans = ans == -1 ? maxi : min(ans, maxi);
    }
    cout << ans << "\n";
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
