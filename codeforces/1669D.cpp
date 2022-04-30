#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; string s;
    cin >> n >> s;

    int red = 0; int blue = 0;
    for (char i : s) {
        if (i == 'W') {
            if (red + blue && !(red && blue)) {
                cout << "NO\n";
                return;
            }
            red = 0;
            blue = 0;
        }
        else if (i == 'B') {
            blue++;
        }
        else {
            red++;
        }
    }

    if (red + blue && !(red && blue)) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
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