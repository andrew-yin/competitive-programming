#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    unordered_map<int, vector<int>> occurences;
    for (int i = 0; i < n; i++) {
        int j; cin >> j;
        occurences[j].push_back(i);
    }

    int ans= -1;
    for (auto &i: occurences) {
        if (i.second.size() > 1) {
            int max_dist = -1;
            for (int j = 0; j < i.second.size()-1; j++) {
                max_dist = max(max_dist, n-i.second[j+1]+i.second[j]);
            }
            ans = max(ans, max_dist);
        }
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