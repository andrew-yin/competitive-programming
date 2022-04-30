#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;

    long long ans = 0;
    vector<vector<int>> counts(11, vector<int>(11, 0));
    for (int i = 0; i < n; i++) {
        char s0, s1; cin >> s0 >> s1;

        for (int j = 0; j <= 10; j++) {
            if (j != s1 - 'a') {
                ans += counts[s0 - 'a'][j];
            }
            if (j != s0 - 'a') {
                ans += counts[j][s1 - 'a'];
            }
        }
        counts[s0 - 'a'][s1 - 'a']++;
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