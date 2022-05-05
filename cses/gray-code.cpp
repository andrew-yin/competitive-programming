#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    for (int i = 0; i < pow(2, n); i++) {
        bitset<16> j(i ^ (i >> 1));
        for (int k = n-1; k >= 0; k--) {
            cout << j[k];
        }
        cout << "\n";
    }    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}
