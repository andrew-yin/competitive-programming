#include <bits/stdc++.h>
using namespace std;

bool painted[101] = {false};

void setIO(string s) {
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

int main() {
    setIO("paint");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for (int i = a; i < b; i++) {
        painted[i] = true;
    }
    for (int i = c; i < d; i++) {
        painted[i] = true;
    }

    int ans = 0;
    for (int i = 0; i <= 100; i++) {
        if (painted[i]) ans++;
    }
    cout << ans;

    return 0;
}