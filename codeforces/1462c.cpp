#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x;
    cin >> x;

    if (x > 45) {
        cout << "-1\n";
        return;
    }
    else if (x < 10) {
        cout << x << "\n";
        return;
    }

    int digit = 9;
    int base = 1;

    int ans = digit*base;
    x -= digit;

    digit--;
    base *= 10;
    while (x > 0) {
        if (x <= digit) {
            ans += x*base;
            break;
        }
        else {
            ans += digit*base;
            x -= digit;
            base *= 10;
            digit--;
        }
    }

    cout << ans << "\n";
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
