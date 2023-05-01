#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x;
    cin >> x;

    int n = 0;
    int sum = 0;
    while (sum < x) {
        sum += (n+1);
        n++; 
    }

    int diff = sum - x;

    if (diff == 0) {
        cout << n << "\n";
        return;
    }
    else if (diff == 1) {
        cout << n + 1 << "\n";
        return;
    }

    cout << n << "\n";
    return;
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
