#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	int a[n+1];
	int p[n+1] = {0};
	int pref[n+1] = {0};
	for (int i=1; i<=n; i++){
		cin >> a[i];
		if (i >= 3){
			if (a[i] < a[i-1] && a[i-2] < a[i-1]){
				p[i-1] = 1;
			}
		}
	}
	pref[1] = p[1];
	for (int i=2; i<=n; i++){
		pref[i] = pref[i-1] + p[i];
	}
	
	int t = -1;
	int l = -1;
	for (int i=1; i<=n-k+1; i++){
		if (pref[i+k-2] - pref[i] > t){
			t = pref[i+k-2] - pref[i];
			l = i;
		}
	}
	cout << t+1 << " " << l << "\n";
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