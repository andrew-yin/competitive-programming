#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    vector<bool> visited(n+1, false);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end(), greater<int>());
    for (int i = 0; i < n; i++) {
        int x = a[i];
        while (x > n || visited[x]) {
            x /= 2;
        }
        if (x == 0) {
            cout << "NO\n";
            return;
        }
        visited[x] = true;
    }
    cout << "YES\n";
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--){
        solve();
    }
}