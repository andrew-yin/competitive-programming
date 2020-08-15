#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n];
    int mini = INT_MAX;
    int maxi = -1;
    int j;
    int ans = 0;
    for (int i=0; i<n; i++){
        cin >> j;
        a[i] = j;
        if (j < mini){
            mini = j;
        }        
        if (j > maxi){
            maxi = j;    
        }
    }

    for (int i: a){
        if (i > mini && i < maxi){
            ans++;
        }
    }
    cout << ans;
    return;
}

int main() {
    solve();
	return 0;
}
