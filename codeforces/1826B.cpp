#include <bits/stdc++.h>
using namespace std;

#define LL long long

const int N = 1E5;
int a[N];

int gcd(int a, int b) {
    while (b != 0) {
        int tmp = a;
        a = b;
        b = tmp % b; 
    }
    return a;
}

void solve() {
    // if palindrome, 0
    // anything can be 1
    // dont need to check higher than max-1
    
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int g = abs(a[0] - a[n-1]);
    for (int i = 1; i < n/2; i++) {
        int diff = abs(a[i] - a[n-i-1]);
        g = gcd(g, diff);
    }
    if (g == 0) {
        cout << "0\n";
    }
    else {
        cout << g << "\n";
    }
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
