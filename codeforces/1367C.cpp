#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int ans = 0;
    for (int i = 0; i < n;) {
        int j = i+1;
        for (; j < n && s[j] == '0'; j++);

        int left = s[i] == '1' ? i+k+1 : i;
        int right = j < n ? j-k-1 : j-1;
        int len = right-left+1;
        if (len > 0) {
            ans += ceil((double) len/(k+1));
        }
        i = j;
    }
    cout << ans << "\n";
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--){
        solve();
    }
}