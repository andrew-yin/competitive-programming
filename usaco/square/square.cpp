#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

int main() {
    setIO("square");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int x11, x12, x21, x22, y11, y12, y21, y22;
    cin >> x11 >> y11 >> x21 >> y21 >> x12 >> y12 >> x22 >> y22;

    cout << pow(max(max(y21, y22) - min(y11, y12), max(x21, x22) - min(x11, x12)), 2);

    return 0;
}