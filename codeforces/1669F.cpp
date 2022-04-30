#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    vector<int> w(n);
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }

    int a = 0;
    int b = n - 1; 

    int a_tot = 0; int b_tot = 0;
    int ans = 0;
    for (; a < n; a++) {
        a_tot += w[a];
        while (b_tot < a_tot && a < b) {
            b_tot += w[b];
            b--;
        }
        if (a_tot == b_tot) {
            ans = (a+1) + (n-1-b);
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