#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, m, r, c; cin >> n >> m >> r >> c;
    vector<string> board(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> board[i];
    }
    bool black_exists = false;
    bool in_row_or_column = false;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (board[i][j-1] == 'B') {
                black_exists = true;
                if (i == r && j == c) {
                    cout << "0\n";
                    return;
                }
                else if (i == r || j == c) {
                    in_row_or_column = true;
                }
            }
        }
    }
    if (black_exists) {
        if (in_row_or_column) {
            cout << "1\n";
        }
        else {
            cout << "2\n";
        }
    }
    else {
        cout << "-1\n";
    }
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--){
        solve();
    }
}