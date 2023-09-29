#include <bits/stdc++.h>
using namespace std;

#define LL long long

const int N = 2E5+1;
LL a[N];
LL b[N];

LL gcd(LL a, LL b) {
    while (b != 0) {
        LL tmp = a;
        a = b;
        b = tmp % b;
    }
    return a;
}

void solve() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i];
    } 
    
    int num = 1; 
    LL gcd_cur = 0;
    LL lcm_cur = 1;
    for (int i = 1; i <= n; i++) {
        gcd_cur = gcd(gcd_cur, a[i]*b[i]);
        lcm_cur = (lcm_cur * b[i])/gcd(lcm_cur, b[i]);
        
        if (gcd_cur % lcm_cur != 0) {
            num++;
            gcd_cur = a[i]*b[i];
            lcm_cur = b[i];
        }
    }
    cout << num << "\n";
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
