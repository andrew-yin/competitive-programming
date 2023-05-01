#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int mills = k*l/nl;
    int limes = c*d;
    int salts = p/np;
    
    int a = min(mills, limes);
    a = min(a, salts);
    cout << a/n;
    return;
}

int main() {
    solve();
	return 0;
}
