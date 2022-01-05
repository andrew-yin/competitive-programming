#include <bits/stdc++.h>
using namespace std;

char a[4][4];
 
void solve(){
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int w_count = 0;
            int b_count = 0; 
            for (int k = i; k < i+2; k++) {
                for (int l = j; l < j+2; l++) {
                    if (a[k][l] == '#') w_count++;
                    else b_count ++;
                }
            }
            if (w_count >= 3 || b_count >= 3) {
                cout << "YES";
                return;
            }
        }
    }
    cout << "NO";
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    solve();
}