#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n+1);
    vector<int> counts(n+1);

    for (int i=1; i <= n; i++) {
        int x;
        cin >> x;
        a[x] = i;
        counts[x]++;
    }

    for (int i=1; i <= n; i++) {
        if (counts[i] == 1) {
           cout << a[i] << "\n"; 
           return;
        }
    }

    cout << "-1\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
