#include <bits/stdc++.h>
using namespace std;

#define LL long long

const int N = 1E5;
int a[N];

void solve() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    } 
    
    int l = 0;
    for (int r = 0; r < n; r++) {
        while (a[l] < r - l + 1 && l <= r) {
            l++;
        } 
        cout << r - l + 1 << " ";
    }
    cout << "\n";
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
