#include <bits/stdc++.h>
using namespace std;

void solve() {
	int m, s;
	cin >> m >> s;
	
	if (m > 1){
		if (s == 0 || s > 9*m){
			cout << "-1 -1";
			return;
		}
	}
	else{
		if (s >= 10){
			cout << "-1 -1";
			return;
		}
	}
	
	int x = s;
	for (int i=1; i<=m; i++){
		for (int j=0; j<=9; j++){
			
			if (i == 1 && i != m){
				if (j > 0 && x-j >= 0 && x-j <= 9*(m-i)){
					cout << j;
					x -= j;
					break;
				}
			}
			else{
				if (x-j >= 0 && x-j <= 9*(m-i)){
					cout << j;
					x -= j;
					break;
				}
			}
		}
	}
	
	cout << " ";
	x = s;
	for (int i=1; i<=m; i++){
		for (int j=9; j>=0; j--){
			
			if (i == 1 && i != m){
				if (j > 0 && x-j >= 0 && x-j <= 9*(m-i)){
					cout << j;
					x -= j;
					break;
				}
			}
			else{
				if (x-j >= 0 && x-j <= 9*(m-i)){
					cout << j;
					x -= j;
					break;
				}
			}
		}
	}
	
	return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}