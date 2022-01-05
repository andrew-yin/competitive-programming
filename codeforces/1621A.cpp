#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, k; cin >> n >> k;
    int max_pieces = ceil(n/2.0);
    if (k > max_pieces) {
        cout << "-1\n";
    }
    else {
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i % 2 == 0 && i == j && count < k) {
                    cout << 'R';
                    count++;
                }
                else {
                    cout << '.';
                }
            }
            cout << "\n";
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