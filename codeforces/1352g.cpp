#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	
	if (n <= 3){
		cout << "-1\n";
		return;
	}
	
	if (n % 2 == 0){
		for (int i=n-1; i>=1; i-=2){
			cout << i << " ";
		}
		cout << "4 2 ";
		for (int i=6; i<=n; i+=2){
			cout << i << " ";
		}
	}
	else{
		for (int i=n; i>=1; i-=2){
			cout << i << " ";
		}
		cout << "4 2 ";
		for (int i=6; i<=n-1; i+=2){
			cout << i << " ";
		}		
	}
	cout << "\n";
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