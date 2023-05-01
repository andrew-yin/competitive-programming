#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, t;
    cin >> n >> t;
    
    char a[n+1];
    for (int i=1; i<=n; i++){
       char j;
       cin >> j;
       a[i] = j; 
    }

    for (int i=0; i<t; i++){
        vector<int> idxs;
        for (int j=1; j<n; j++){
            if (a[j] == 'B' && a[j+1] == 'G'){
                 idxs.push_back(j); 
            } 
        }
        for (int j: idxs){
            char temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
    }
    
    for (int i=1; i<=n; i++){
        cout << a[i];
    }
    return;
}

int main() {
    solve();
	return 0;
}
