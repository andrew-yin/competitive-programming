#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    vector<int> l(n);
    vector<int> r(n);
    vector<vector<int>> exists(n+1, vector<int>(n+1, 0));
    for (int i = 0; i < n; i++) {
        cin >> l[i] >> r[i];
        exists[l[i]][r[i]] = 1;
    }    
    for (int i = 0; i < n; i++) {
        for (int d = l[i]; d <= r[i]; d++) {
            if ((d == l[i] or exists[l[i]][d-1]) and (d == r[i] or exists[d+1][r[i]])) {
                cout << l[i] << " " << r[i] << " " << d << "\n";
                break;
            }
        }
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