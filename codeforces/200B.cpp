#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    double total = 0.0;
    for (int i=0; i < n; i++){
        double j;
        cin >> j;
        total += j;
    }
    cout.precision(15);
    cout << total/n;
}

int main() {
    solve();
	return 0;
}
