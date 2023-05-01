#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    int out[n+1];
    for (int i=1; i<=n; i++){
        int j;
        cin >> j;
        out[j] = i;
    }
    
    for (int i=1; i<=n; i++){
        cout << out[i] << " ";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}