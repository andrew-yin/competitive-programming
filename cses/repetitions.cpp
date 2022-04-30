#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    string s; cin >> s;

    int ans = 1;
    int cur = 1;
    for (auto i = 1; i < s.size(); i++) {
        if (s[i] == s[i-1]) {
            cur += 1;
            ans = max(ans, cur);
        }
        else {
            cur = 1;
        }
    }
    cout << ans << "\n";
}