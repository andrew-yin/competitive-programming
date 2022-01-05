#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    string s; cin >> s;
    int j = -1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') {
            j = i;
            break;
        }
    }
    if (j > -1) {
        cout << s.substr(0, j) + s.substr(j+1);
    }
    else {
        cout << s.substr(0, s.size()-1);
    }
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    solve();
}