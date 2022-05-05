#include <bits/stdc++.h>
using namespace std;

uint64_t MOD = 1E9 + 7;

uint64_t solve(uint64_t n) {
    uint64_t ans = 1;
    while (n > 0) {
        ans = (ans * 2) % MOD;
        n--;
    }
    return ans;
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    uint64_t n; cin >> n;
    cout << solve(n) << "\n";
    return 0;
}