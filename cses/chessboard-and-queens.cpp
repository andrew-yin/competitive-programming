#include <bits/stdc++.h>
using namespace std;

vector<vector<bool>> reserved(8, vector<bool>(8, false));
vector<bool> row(8, false);
vector<bool> diag1(14, false);
vector<bool> diag2(14, false);
int ans = 0;

void solve(int i) {
    if (i == 8) {
        ans++;
    }
    else {
        for (int j = 0; j < 8; j++) {
            if (!reserved[j][i]) {
                if (!row[j] && !diag1[i+j] && !diag2[8 - i + j]) {
                    row[j] = diag1[i+j] = diag2[8-i+j] = true;
                    solve(i+1);
                    row[j] = diag1[i+j] = diag2[8-i+j] = false;
                }
            }
        }
    }
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            char k; cin >> k;
            if (k == '*') reserved[j][i] = true;
        }
    }
    solve(0);
    cout << ans;

    return 0;
}
