#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	
	if (n >= m){
		cout << n-m;
		return;
	}
	
	int ans = 0;
	
	while (m != n){
		if (m % 2 == 0){
			m /= 2;
			ans++;
		}
		else{
			m++;
			m /= 2;
			ans += 2;
		}
		if (n >= m){
			cout << ans + n - m;
			return;
		}
	}
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}