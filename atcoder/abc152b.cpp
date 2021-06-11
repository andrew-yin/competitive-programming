// Author: Andrew Yin
// Date: Summer 2021

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b; cin >> a >> b;
    if (a < b) {
        for (int i = 0; i < b; i++) {
            cout << a;
        }
    }
    else {
        for (int i = 0; i < a; i++) {
            cout << b;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
