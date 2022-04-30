#include <bits/stdc++.h>
using namespace std;

int a[100000];
 
void solve(){
    int n; cin >> n;
    unordered_map<int, int> counts;
    int big = -1;
    for (int i = 0; i < n; i++) {
        int j; cin >> j;
        counts[j]++;
        big = max(big, counts[j]);
    }
    cout << n - big;
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    solve();
}