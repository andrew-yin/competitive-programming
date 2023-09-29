#include <bits/stdc++.h>
using namespace std;

#define LL long long

const int N = 1E5;
int b[N];
int best_left[N];
int best_right[N];

void solve() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    } 
    
    best_left[1] = b[0] - 1;
    for (int i = 2; i < n - 1; i++) {
        best_left[i] = max(best_left[i-1] - 1, b[i-1] - 1);
    }
    
    best_right[n-2] = b[n-1] - 1;
    for (int i = n - 3; i > 0; i--) {
        best_right[i] = max(best_right[i+1] - 1, b[i+1] - 1);
    }
    
    
    int ans = -1;
    for (int i = 1; i < n-1; i++) {
        ans = max(ans, b[i] + best_left[i] + best_right[i]);
    }
    cout << ans << "\n"; 
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
