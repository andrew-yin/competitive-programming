// Author: Andrew Yin
// Date: Summer 2021

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<vector<string>> log(n+1, vector<string>({""}));
    for (int i = 0; i < m; i++) {
        int p; cin >> p;
        string S; cin >> S;
        log[p].push_back(S);
    }

    int num_correct = 0;
    int num_penalty = 0;
    for (int i = 1; i <= n; i++) {
        int penalty = 0;
        bool added_ac = false;
        for (int j = 0; j < log[i].size(); j++) {
            if (log[i][j] == "WA") {
                penalty++;
            } 
            else if (log[i][j] == "AC") {
                num_correct++;
                added_ac = true;
                break;
            }
        }
        if (!added_ac) {
            penalty = 0;
        }
        num_penalty += penalty;
    }

    cout << num_correct << " " << num_penalty;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
