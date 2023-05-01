#include <bits/stdc++.h>
using namespace std;

void solve() {
     int n, k;
     cin >> n >> k;
     
     for (int i = 0; i < n; i++) {
         int x = i % 3;
         if (x == 0) {
             cout << 'a';
         }
         else if (x == 1) {
             cout << 'b';
         }
         else if (x == 2) {
             cout << 'c';
         }
     }
     cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
