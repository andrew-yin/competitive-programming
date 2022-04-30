#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, k; cin >> n >> k;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<pair<int, int>> s(n);
    for (int i = 0; i < n; i++) {
        s[i] = pair<int,int>(a[i], b[i]);
    }
    sort(s.begin(), s.end());

    for (int i = 0; i < n; i++) {
        if (k >= s[i].first) {
            k += s[i].second;
        }
        else {
            break;
        }
    }
    cout << k << "\n";
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--){
        solve();
    }
}