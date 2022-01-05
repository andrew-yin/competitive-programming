#include <bits/stdc++.h>
using namespace std;

long long power(long long base, long long exponent, long long mod) {
    if (exponent == 0) {
        return 1;
    }
    long long part = power(base, exponent/2, mod);
    long long ans = (part * part) % mod;
    if (exponent % 2 == 1) {
        ans = (ans * base) % mod; 
    }
    return ans;
}
 
void solve(){
    int k; cin >> k;
    long long mod = 1e9+7;
    long long exponent = (1LL << k) - 2;
    long long ans = (6*power(4, exponent, mod)) % (mod);
    cout << ans << "\n";
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    solve();
}