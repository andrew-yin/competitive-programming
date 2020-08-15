#include <bits/stdc++.h>
using namespace std;

void solve() {
	int x;
	cin >> x;

	int ans = 0;
	while (x > 0) {
		ans += x & 1;
		x >>= 1;
	}

	cout << ans;
}

int main() {
	solve();
	return 0;
}
