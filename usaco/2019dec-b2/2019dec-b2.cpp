#include <bits/stdc++.h>
using namespace std;

int n;
string s;

void setIO(string s) {
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

int main() {
    setIO("whereami");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> s;
    for (int k = 1; k <= n; k++) {
        unordered_set<string> past;
        bool solved = true;
        for (int i = 0; i <= n - k; i++) {
            string sub = s.substr(i, k);
            if (past.count(sub)) {
                solved = false;
                break;
            }
            else {
                past.insert(sub);
            }
        }
        if (solved) {
            cout << k;
            break;
        }
    }

    return 0;
}