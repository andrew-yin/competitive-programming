#include <bits/stdc++.h>
using namespace std;

#define LL long long

void solve() {
    int n; string s;
    cin >> n >> s;

    if (count(s.begin(), s.end(), '(')*2 != n) {
        cout << "-1\n"; return;
    }

    vector<int> ans(n);
    int cur = s[0] == '(' ? 1 : -1;
    int color = 1;
    ans[0] = color;

    int up = s[0] == '(';
    for (int i = 1; i < n; i++) {

        if (s[i] == '(') {
            cur++;
            if (cur > 0 && !up) {
                up = true;
                color = (color == 1) ? 2 : 1;
            }
        }
        else {
            cur--;
            if (cur < 0 && up) {
                up = false;
                color = (color == 1) ? 2 : 1;
            }
        }
        ans[i] = color;
    }

    if (count(ans.begin(), ans.end(), 1) != n) {
        cout << "2\n";
    }
    else {
        cout << "1\n";
    }
    for (int &i: ans) {
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
