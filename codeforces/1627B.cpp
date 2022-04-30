#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, m; cin >> n >> m;
    map<int, int> distances;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int dist1 = i+j;
            int dist2 = i+(m-1-j);
            int dist3 = (n-1-i)+j;
            int dist4 = n-1-i+(m-1-j);
            int dist = max({dist1, dist2, dist3, dist4});
            distances[dist]++;
        }
    }

    for (auto &i: distances) {
        for (int j = 0; j < i.second; j++) {
            cout << i.first << " ";
        }
    }
    cout << "\n";
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--){
        solve();
    }
}