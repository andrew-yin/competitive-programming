#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s;
	
	int ans = 0;
	
	int n = (int) s.length()/2;
	
	
	for (int i=1; i <= n - 1; i++){
		if (s.substr(0, i) == s.substr(i,i) && s.substr(2*i, n-i) == s.substr(i + n, n-i)){
			ans++;
		}
	}
	
	cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}