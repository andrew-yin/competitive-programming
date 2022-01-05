#include <bits/stdc++.h>
using namespace std;

int orders[100000];
 
void solve(){
    int n; cin >> n;
    for (int i = 0; i < n; i++) cin >> orders[i];

    int bank_25 = 0;
    int bank_50 = 0;
    int bank_100 = 0;
    for (int i = 0; i < n; i++) {
        int change = orders[i] - 25;
        if (change == 0) {
            bank_25++;
        }
        else if (change == 25) {
            if (bank_25 <= 0) {
                cout << "NO"; return;
            }
            bank_25--;
            bank_50++;
        }
        else {
            if (bank_50 > 0 && bank_25 > 0) {
                bank_50--;
                bank_25--;
                bank_100++;
            }
            else if (bank_25 >= 3) {
                bank_25 -= 3;
                bank_100++;
            }
            else {
                cout << "NO"; return;
            }
        }
    }
    cout << "YES";
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    solve();
}