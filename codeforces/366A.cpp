#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    for (int i = 1; i <= 4; i++) {
        int min_c1, min_j1, min_c2, min_j2;
        cin >> min_c1 >> min_j1 >> min_c2 >> min_j2;
        int min_g1 = min(min_c1, min_j1);
        int min_g2 = min(min_c2, min_j2);
        int total = min_g1 + min_g2;
        if (total <= n) {
            cout << i << " " << min_g1 << " " << n - min_g1;
            return;
        }
    }
    cout << "-1";
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    solve();
}