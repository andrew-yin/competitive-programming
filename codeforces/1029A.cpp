#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, k; cin >> n >> k;
    string t; cin >> t;
    string add;
    for (int i = n-1; i >= 0; i--) {
        add = t.substr(i);
        if (t == t.substr(n-i)+add) {
            break;
        }
    }
    string s = t;
    for (int i = 0; i < k-1; i++) {
        s += add;
    }
    cout << s;
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    solve();
}