#include <bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin >> s;
	unordered_set<char> x;
	for (int i=0; i<s.size(); i++){
		x.insert(s[i]);
	}
	cout << (x.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");
	
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

	solve();

    return 0;
}