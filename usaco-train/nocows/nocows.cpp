/*
ID: andrewy8
TASK: nocows
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

int n, k;

vector<vector<int>> dp(201, vector<int>(101, 0));

void setIO(string s) {
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

int main() {
    setIO("nocows");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> k;
    if (n % 2 == 0 || n < 2*(k-1)+1 || n > pow(2, k) - 1) {
        cout << "0\n";
    }
    else {
        for (int i = 1; i <= k; i++) {
            dp[1][i] = 1;
        }

        for (int depth = 2; depth <= k; depth++) {
            for (int nodes = 1; nodes <= n; nodes += 2) {
                for (int left_nodes = 1; left_nodes <= nodes - 2; left_nodes++) {
                    dp[nodes][depth] += dp[left_nodes][depth-1]*dp[nodes - left_nodes - 1][depth-1];
                    dp[nodes][depth] %= 9901;
                }
            }
        } 
        cout << (9901 + dp[n][k] - dp[n][k-1]) % 9901 << "\n";
    }

    return 0;
}