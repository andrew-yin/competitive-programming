#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    
    int ans = -1;
    for (int middle = 1; middle <= n; middle++) {
        int score = 0;
        int maxi = -1;
        for (int i = 1; i < middle; i++) {
            score += i*i;
            maxi = max(maxi, i*i);
        }

        int j = n;
        for (int i = middle; i <= n; i++) {
            score += j*i;
            maxi = max(maxi, j*i);
            j--;
        }

        ans = max(ans, score - maxi);
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
