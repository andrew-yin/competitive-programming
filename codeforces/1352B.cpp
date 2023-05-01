#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n,k;
	cin >> n >> k;

	if (k > n){
		cout << "NO\n";
		return;
	}
	
	if (n%2 == 0){	
		if (k*2 > n){
			if (k % 2 != 0){
				cout << "NO\n";
			}
			else{
				cout << "YES\n";
				for (int i=0; i<k-1; i++){
					cout << "1 ";
				}
				cout << n-(k-1) << "\n";
			}
		}
		else{
			cout << "YES\n";
			for (int i=0; i<k-1; i++){
			cout << "2 ";
			}
			cout << n-2*(k-1) << "\n";
		}
	}
	else{
		if (k % 2 == 0){
			cout << "NO\n";
		}
		else{
			cout << "YES\n";
			for (int i=0; i<k-1; i++){
				cout << "1 ";
			}
			cout << n-(k-1) << "\n";		
		}
	}
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