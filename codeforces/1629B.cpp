#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int l, r, k; cin >> l >> r >> k;
    
    int num_odds;
    if ((l % 2 == 1 && r % 2 == 0) || (l % 2 == 0 && r % 2 == 1)) {
        num_odds = (r-l+1)/2;
    }
    else if (l % 2 == 0 && r % 2 == 0) {
        num_odds = (r-l)/2;
    }
    else if (l % 2 == 1 && r % 2 == 1) {
        num_odds = (r-l+2)/2;
    }
    //cout << num_odds << " ";
    if (k >= num_odds || (r == l && l > 1)) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
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