#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, x;
	cin >> n >> x;
	
	int odd = 0;
	int even = 0;
	
	int a;
	for (int i = 0; i<n; i++){
		cin >> a;
		if (a % 2){
			odd++;
		}
		else{
			even++;
		}
	}
	
	for (int i=1; i<=x; i+=2){
		if (i <= odd && x-i <= even){
			cout << "Yes\n";
			return;
		}
	}
	
	cout << "No\n";
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