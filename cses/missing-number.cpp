#include <bits/stdc++.h>
using namespace std;

bool seen[200001] = {0};
 
void solve(){
    int n; cin >> n;

    for (int i = 0; i < n-1; i++) {
        int j; cin >> j;
        seen[j] = true;
    }

    for (int i = 1; i <= n; i++) {
        if (!seen[i]) {
            cout << i << "\n";
            return;
        }
    }
    return;
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    solve();
}