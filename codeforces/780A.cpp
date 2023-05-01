#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;

	int a[n+1] = {0};
	int x;
	int cur = 0;
	int ans = -1;
	for (int i=0; i<2*n; i++){
		cin >> x;
		if (a[x] == 0) {
			cur++;
		}
		else {
			cur--;
		}
		a[x] = (a[x] + 1) % 2;
		
		if (cur > ans) {
			ans = cur;
		}
	}
	cout << ans;
	return;
}

int main() {
	solve();
	return 0;
}
