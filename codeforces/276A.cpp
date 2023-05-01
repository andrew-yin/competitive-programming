#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    int ans = INT_MIN;

    for (int i=0; i<n; i++){
        int f, t;
        cin >> f >> t;
        int joy;
        if (t > k){
            joy = f - (t - k);
        }
        else{
            joy = f;
        }
        if (joy > ans){
            ans = joy;
        }
    }
    cout << ans;
    return;
}

int main() {
    solve();
	return 0;
}
