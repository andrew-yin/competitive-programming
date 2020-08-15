#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> a;
	int zeros = 0;
	while (n>0){
		if (n%10 != 0){
			a.push_back((n%10)*pow(10, zeros));
		}
		n /= 10;
		zeros++;
	}
	
	cout << a.size() << "\n";
	for (auto i: a){
		cout << i << " ";
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