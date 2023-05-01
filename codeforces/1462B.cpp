#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;
    if (s == "2020") {
        cout << "YES\n";
        return;
    }

    int m = n - 4;
    for (int i = 0; i <= 4; i++) {
        string j = s;
        j.erase(i, m);
        if (j == "2020") {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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
