#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    int sum = a + b + c;
    if (sum % 9 == 0) {
        int min = 0;
        if (a < b) {
            if (c < a) {
                min = c; 
            }
            else {
                min = a;
            }
        }
        else {
            if (c < b) {
                min = c;
            }
            else { 
                min = b;
            }
        }

        int div = sum / 9;
        if (div <= min) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    else {
        cout << "NO\n";
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
