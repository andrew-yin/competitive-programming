#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	
	unordered_set<int> seen;
	unordered_set<int> counts;
	
	int cur = 1;
	for (int i=1; i<n; i++){
		if (a[i-1] != a[i]){
			if (counts.count(cur)){
				cout << "NO\n";
				return;
			}
			if (seen.count(a[i-1])){
				cout << "NO\n";
				return;
			}
			else{
				counts.insert(cur);
				seen.insert(a[i-1]);
				cur = 1;
			}
			
		}
		else{
			cur++;
		}
	}

	if (counts.count(cur)){
		cout << "NO\n";
		return;
	}
	if (seen.count(a[n-1])){
		cout << "NO\n";
		return;
	}
	else{
		counts.insert(cur);
		seen.insert(a[n-1]);
	}
	cout << "YES\n";
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