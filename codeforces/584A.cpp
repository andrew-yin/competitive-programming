#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, t;
    cin >> n >> t;  

    if (t == 10){
        if (n == 1){
            cout << "-1";
            return;
        }
        for (int i=0; i<n-1; i++){
            cout << "1";
        }
        cout << "0";
    }
    else {
        for (int i=0; i<n; i++){
            cout << t;
        }
    }
    return;
}

int main() {
	solve();
	return 0;
}
