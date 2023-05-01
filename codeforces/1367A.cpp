#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s;
	
	string ans = s.substr(0,2);
	
	for (int i=3; i<s.length(); i+=2){
		ans += s[i];
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