#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;

    map<int, int> count;
    for (int i = 0; i < n*(n-1)/2; i++) {
        int j; cin >> j;
        count[j]++;
    }

    for (int i = 0; i < n-1; i++) {
        int j = count.begin()->first;
        cout << j << " ";
        count[j] -= n - i - 1;
        if (count[j] == 0) {
            count.erase(j);
        }
    }
    cout << (int) 1E9 << "\n"; 
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
