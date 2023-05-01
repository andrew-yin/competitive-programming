#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x;
    cin >> x;
    
    int hp = x % 4;

    if (hp == 0) {
        cout << "1 A\n";
    }
    else if (hp == 1) {
        cout << "0 A\n";
    }
    else if (hp == 2) {
        cout << "1 B\n";
    }
    else if (hp == 3) {
        cout << "2 A\n";
    }
}

int main() {
    solve();
	return 0;
}
