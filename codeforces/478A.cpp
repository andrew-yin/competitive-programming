#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int sum = 0; 
    for (int i = 0; i < 5; i++) {
        int j; cin >> j;
        sum += j;
    }
    if (sum % 5 || sum <= 0) {
        cout << "-1"; return;
    }
    cout << sum/5;
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    solve();
}