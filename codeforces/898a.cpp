#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int r = n % 10;

    if (r > 5){
        cout << n + 10 - r;
    }
    else {
        cout << n - r;
    }
    return;
}

int main() {
	solve();
	return 0;
}
