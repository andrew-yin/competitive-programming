#include <bits/stdc++.h>

using namespace std;



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b;
    cin >> a >> b;

    int ans = 0;
    int lit = a;
    int burnt = 0;
    while (lit > 0){
        ans += lit;
        int s = lit + burnt;
        lit = s/b;
        burnt = s % b;
    }
    cout << ans << "\n";

    return 0;
}