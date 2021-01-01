#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    int day = 0;
    for (int i=0; i<n; i++) {
        if (a[i] >= day+1) {
            day++;
        }
    }
    cout << day;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
	return 0;
}
