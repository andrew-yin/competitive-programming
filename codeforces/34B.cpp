#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, m; cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = 0; i < m; i++) {
        if (a[i] > 0) {
            break;
        }
        ans -= a[i];
    }
    cout << ans;
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    solve();
}