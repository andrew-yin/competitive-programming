#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, l; cin >> n >> l;
    vector<int> x(n);
    for (int i = 0; i < n; i++) cin >> x[i];

    int y = 0;
    for (int i = 0; i < l; i++) {
        int one_ct = 0; int zero_ct = 0;
        for (int &j: x) {
            if (j & (1 << (l-i-1))) {
                one_ct++;
            }
            else {
                zero_ct++;
            }
        }
        y <<= 1;
        if (one_ct > zero_ct) {
            y += 1;
        }
    }
    cout << y << "\n";
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--){
        solve();
    }
}