#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    
    int x = n/2;
    if (n % 2 == 0) {
        cout << (x+1)*(x+1);
    }
    else {
        cout << 2*(x+1)*(x+2);
    }

	return 0;
}
