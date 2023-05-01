#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	deque<int> a;
	for (int i=0; i<n; i++){
		int j;
		cin >> j;
		a.push_back(j);
	}
	
	int A = 0, B = 0, a_cur = 0, b_cur = 0;
	A += a.front();
	a.pop_front();
	a_cur = A;
	
	int moves = 1; //odd is Bob's turn, even is Alice's
	while (!a.empty()){
			if (moves % 2 == 0){
				a_cur = 0;
				while (a_cur <= b_cur){
					a_cur += a.front();
					a.pop_front();
					if (a.empty()){
						break;
					}
				}
				A += a_cur;
			}
			else{
				b_cur = 0;
				while (b_cur <= a_cur){
					b_cur += a.back();
					a.pop_back();
					if (a.empty()){
						break;
					}
				}
				B += b_cur;
			}
			moves++;
	}
	
	cout << moves << " " << A << " " << B << "\n";
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