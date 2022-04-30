#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int a, b, c; cin >> a >> b >> c;

    // test b and c
    int d = c - b;
    int desired = b - d;
    if (desired != 0 && desired % a == 0 && desired/a > 0) {
        cout << "YES\n";
        return;
    }

    // test a and c
    d = (c - a)/2;
    desired = a + d;
    if ((c - a) % 2 == 0 && desired != 0 && desired % b == 0 && desired/b > 0) {
        cout << "YES\n";
        return;
    }

    d = b - a;
    desired = b + d;
    if (desired != 0 && desired % c == 0 && desired/c > 0) {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--){
        solve();
    }
}