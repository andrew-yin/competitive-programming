#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    long long n, a, b, c; cin >> n >> a >> b >> c;
    int needed = 4 - (n % 4);
    if (needed == 4) {
        cout << "0"; return;
    }
    if (needed == 1) {
        cout << min(a, min(b+c, 3*c)); return;
    }
    if (needed == 2) {
        cout << min(b, min(2*a, 2*c)); return;
    }
    if (needed == 3) {
        cout << min(c, min(3*a, b+a)); return;
    }
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    solve();
}