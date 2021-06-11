/*
ID: andrewy8
TASK: 
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

int main() {
    setIO("teleport");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int a, b, x, y; cin >> a >> b >> x >> y;
    cout << min({abs(a - b), abs(a - x) + abs(b - y), abs(a - y) + abs(b - x)});

    return 0;
}