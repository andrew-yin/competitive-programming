#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    for (int i = 0; i < n; i++) {
        if (sum % (n-i) == 0) {
            int e = sum/(n-i);

            int ss = 0;
            bool has_sol = true;

            for (int j = 0; j < n; j++) {
                if (ss < e) {
                    ss += a[j];
                }

                if (ss == e) {
                    ss = 0;
                }
                else if (ss > e) {
                    has_sol = false;
                    break;
                }
            }

            if (has_sol) {
                cout << i << "\n";
                return;
            }
        }
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
