#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int a[n];
    int count[8001] = {0};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        count[a[i]]++;
    }

    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        int s = a[i];
        for (int j = i + 1; j < n; j++) {
            s += a[j];
            if (s <= n) {
                ans += count[s];
                count[s] = 0;
            }
            else{
            	break;
            }
        }
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}