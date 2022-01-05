#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    vector<int> l(n), r(n), c(n);
    for (int i = 0; i < n; i++) {
        cin >> l[i] >> r[i] >> c[i];
    }
    int min_idx = 0;
    int max_idx = 0;
    int max_len_idx = 0;
    for (int s = 0; s < n; s++) {
        if (l[s] < l[min_idx] || (l[s] == l[min_idx] && c[s] < c[min_idx])) {
            min_idx = s;
        }
        if (r[s] > r[max_idx] || (r[s] == r[max_idx] && c[s] < c[max_idx])) {
            max_idx = s;
        }
        if (r[s] - l[s] > r[max_len_idx] - l[max_len_idx] || (r[s] - l[s] == r[max_len_idx] - l[max_len_idx] && c[s] < c[max_len_idx])) {
            max_len_idx = s;
        }
        int cost = r[max_idx] - l[min_idx] == r[max_len_idx] - l[max_len_idx] ? min(c[max_len_idx], c[min_idx] + c[max_idx]) : c[min_idx] + c[max_idx];
        cout << cost << "\n";
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