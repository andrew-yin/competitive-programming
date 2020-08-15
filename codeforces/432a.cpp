#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    int count = 0;
    int less_than = 5 - k;

    for (int i=0; i<n; i++){
        int j;
        cin >> j;
        if (j <= less_than){
            count++;
        }
    }

    cout << count/3;
    return;
}

int main() {
    solve();
	return 0;
}
