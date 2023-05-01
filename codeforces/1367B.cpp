#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	
	int odd = 0;
	int even = 0;
	
	int a;
	for (int i=0; i<n; i++){
		cin >> a;
		if (a % 2 != i % 2){
			if (a % 2 == 1){
				odd++;
			}
			else{
				even++;
			}
		}
	}
	
	cout << (odd == even ? odd : -1) << "\n";
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