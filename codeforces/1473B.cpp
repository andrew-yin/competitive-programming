#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;

    int s_len = s.size();
    int t_len = t.size();

    int st_lcm = lcm(s_len, t_len);

    string s_expand = "";
    string t_expand = "";
    for (int i = 0; i < st_lcm/s_len; i++) {
        s_expand += s;
    }
    for (int i = 0; i < st_lcm/t_len; i++) {
        t_expand += t;
    }

    if (s_expand == t_expand) {
        cout << s_expand << "\n";
    }
    else {
        cout << "-1\n";
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
