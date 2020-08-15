#include <bits/stdc++.h>
using namespace std;

void solve() {
	string w;
	cin >> w;
	
	int cnt[123] = {0};
	for (char i: w){
		cnt[(int) i]++;
	}
	
	for (int i=97; i<123; i++){
		if (cnt[i] % 2 == 1){
			cout << "No";
			return;
		}
	}
	
	cout << "Yes";
	return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}