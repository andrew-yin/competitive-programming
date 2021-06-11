// Author: Andrew Yin
// Date: Summer 2021

#include <bits/stdc++.h>
using namespace std;

void solve() {
   int k, x; 
   cin >> k >> x;
   string out = k*500 >= x ? "Yes\n" : "No\n";
   cout << out;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
