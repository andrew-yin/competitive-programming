#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k;
	string s;
	cin >> n >> k >> s;

	vector<string> ans;
	int idx = 0;
	for (int i=0; i<k; i++) {
		if (n == 1)	{
			ans.push_back("0");
			break;
		}
		else {
			if (i == 0) {
				ans.push_back("1");
			}
			else {
				ans.push_back("0");
			}
		}
	}
	for (string i: ans){
		cout << i;
	}
}

int main() {
	solve();
	return 0;
}
