#include <bits/stdc++.h>
using namespace std;

#define LL long long

const int N = 500;
const int L = 1E5;

int n, l, k;
LL d[N+1];
LL a[N+1];
LL mt[N+1][N]; 
 
void solve() {
    cin >> n >> l >> k;
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    d[n] = l;
    
    for (int j = 0; j <= k; j++) {
        mt[n][j] = 0;
    }
    for (int i = n-1; i >= 0; i--) {
        mt[i][k] = a[i]*(d[i+1] - d[i]) + mt[i+1][k];
    }
    
    for (int i = n-1; i >= 0; i--) {
        for (int j = 0; j < k; j++) {
            LL val = -1;
            
            for (int p = 1; i + p <= n && j + p - 1 <= k; p++) {
                LL val2 = a[i]*(d[i+p] - d[i]) + mt[i+p][j+p-1];
                
                if (val == -1) {
                    val = val2;
                }
                else {
                    val = min(val, val2);
                }
            }
            mt[i][j] = val;
        }
    } 

    LL ans = -1;    
    for (int j = 0; j <= k; j++) {
        if (ans == -1) {
            ans = mt[0][j];
        }
        else {
            ans = min(ans, mt[0][j]);
        }
    }
    cout << ans << "\n";
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    solve();
}
