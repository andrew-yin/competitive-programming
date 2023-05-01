#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	
	int a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	
	
	unordered_set<int> b;
	for (int i=0; i<n; i++){
		b.insert(((i + a[i]) % n + n) % n);
	}
	
	cout << (b.size() == n ? "YES\n" : "NO\n");
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}