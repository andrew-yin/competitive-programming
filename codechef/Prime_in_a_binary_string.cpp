#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    string s; cin >> s;
    bool seen_one = false;
    for (char i : s) {
        if (seen_one) {
            cout << "Yes\n";
            return;
        }
        if (i == '1') {
            seen_one = true;
        }
    }
    cout << "No\n";
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--){
        solve();
    }
}