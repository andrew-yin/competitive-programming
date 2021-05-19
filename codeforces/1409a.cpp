#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long int a, b;
	cin >> a >> b;
	long long int diff = llabs(a-b);
	long long int ans = diff/10;
	if (diff % 10 == 0) {
		cout << ans << "\n";
	}
	else {
		cout << ans + 1 << "\n";
	}
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
