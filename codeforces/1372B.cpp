#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    for (int i = 2; i <= floor(sqrt(n)); i++) {
        if (n % i == 0) {
            int part1 = n/i;
            int part2 = n - part1;
            cout << part1 << " " << part2 << "\n";
            return;
        }
    }
    cout << 1 << " " << n-1 << "\n";
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--){
        solve();
    }
}
