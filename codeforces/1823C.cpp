#include <bits/stdc++.h>
using namespace std;

#define LL long long

bool is_prime(int i) {
    if (i < 2) return false;
    if (i == 2) return true;
    if (i % 2 == 0) return false;
    for (int j = 3; j*j <= i; j += 2) {
        if (i % j == 0) return false;
    }
    return true;
}

void update_prime_cts(int j, unordered_map<int, int> &prime_cts) {
    if (j > 1) {
        if (j % 2 == 0) {
            prime_cts[2]++;
            update_prime_cts(j/2, prime_cts);
            return;
        }

        for (int i = 3; i*i <= j; i+= 2) {
            if (is_prime(i) && j % i == 0) {
                prime_cts[i]++;
                update_prime_cts(j/i, prime_cts);
                return;
            }
        } 
        
        prime_cts[j]++;
    }
}

void solve() {
    unordered_map<int, int> prime_cts;

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int j; cin >> j;
        update_prime_cts(j, prime_cts);
    }

    int ans = 0;
    int remaining = 0;
    for (auto &i: prime_cts) {
        ans += i.second/2;
        remaining += i.second % 2;
    }
    ans += remaining/3;
    cout << ans << "\n";
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
