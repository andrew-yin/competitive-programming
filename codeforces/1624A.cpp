#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    int max_a = -1; int min_a = INT_MAX;
    for (int i = 0; i < n; i++) {
        int j; cin >> j;
        max_a = max(max_a, j);
        min_a = min(min_a, j);
    }
    cout << max_a - min_a << "\n";
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--){
        solve();
    }
}