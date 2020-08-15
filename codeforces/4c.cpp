#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	
	unordered_map<string, int> names;
	
	string s;
	for (int i=0; i<n; i++){
		cin >> s;
		
		if (!names[s]){
			cout << "OK\n";
			names[s]++;
		}
		else{
			cout << s << names[s] << "\n";
			names[s]++;
		}
	}
	
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}