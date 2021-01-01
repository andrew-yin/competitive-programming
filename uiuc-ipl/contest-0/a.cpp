#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    unordered_map<char, int> counts;
    for (int i=0; i<n; i++) {
        string s;
        cin >> s;
        for (auto j=0; j<s.size(); j++) {
           counts[s[j]]++; 
        }
    }
    for (auto i = counts.begin(); i != counts.end(); i++) {
        if (i->second % n != 0) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    return;
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
