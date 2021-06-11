#include <bits/stdc++.h>
using namespace std;

int b[4];
int a[4];

void setIO(string s) {
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

int main() {
    setIO("promote");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    for (int i = 0; i < 4; i++) {
        cin >> b[i] >> a[i];
    }

    int gtp = a[3] - b[3];
    int stg = a[2] - (b[2] - gtp);
    int bts = a[1] - (b[1] - stg);
    cout << bts << "\n" << stg << "\n" << gtp;

    return 0;
}