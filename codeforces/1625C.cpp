#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, l, k; cin >> n >> l >> k;
    vector<int> D(n);
    for (int i = 0; i < n; i++) cin >> D[i];
    vector<int> S(n);
    for (int i = 0; i < n; i++) cin >> S[i];
    if (n <= 1) {
        cout << S[0]*l;
        return;
    }
    vector<vector<int>> minTime(n, vector<int>(k+1, 0));
    for (int i = n-1; i >= 1; i--) {
        for (int j = 0; j <= k; j++) {
            if (i == n-1 && j == 0) {
                minTime[i][j] = S[i]*(l-D[i]);
            }
            else if (i == n-1 && j > 0) {
                minTime[i][j] = min(S[i]*(l - D[i]), S[i-1]*(l-D[i]));
            }
            else if (i < n-1 && j == 0) {
                minTime[i][j] = S[i]*(D[i+1]-D[i]) + minTime[i+1][j];
            }
            else {
                minTime[i][j] = min(S[i]*(D[i+1] - D[i])+minTime[i+1][j], S[i-1]*(D[i+1]-D[i])+minTime[i+1][j-1]);
            }
        }
    }
    cout << S[0]*D[1]+minTime[1][k];
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    solve();
}