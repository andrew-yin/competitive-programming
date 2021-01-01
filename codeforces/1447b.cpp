#include <bits/stdc++.h>
using namespace std;

void solve() {
    int m, n;
    cin >> m >> n;

    int neg_count = 0;
    int min = 101;
    int sum = 0;
    for (int i = 0; i < m*n; i++) {
        int x;
        cin >> x;
        if (x < 0) {
            neg_count++;
            x *= -1;
        }

        sum += x;
        if (x < min) {
            min = x;
        }
    }

    if (neg_count % 2 == 0) {
        cout << sum << "\n";
    }
    else {
        cout << sum - 2*min << "\n";
    }
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
