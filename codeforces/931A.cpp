#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b; cin >> a >> b;

    int dist = abs(b - a)/2;

    if (abs(b - a) % 2) {
        cout << (dist * (dist+1))/2 + ((dist+1)*(dist+2))/2 << "\n";
    }
    else {
        cout << dist * (dist+1) << "\n";
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}
