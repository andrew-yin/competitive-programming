#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int x, y; cin >> x >> y;
    if ((x - y + 1) >= 0 && (x-y+1) % 2 == 0 && ((y == 1 && x == 0) || (y > 1 && x >= 1))) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    solve();
}