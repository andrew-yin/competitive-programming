#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long k; cin >> k;

    long long digits = 1;
    long long min_idx = 0;
    long long max_idx = 9;
    while (k > max_idx) {
        digits++;
        min_idx = max_idx+1;
        max_idx = min_idx + digits*9*((long long) pow(10, digits-1)) - 1;
    }

    long long offset = k - min_idx;
    long long num = ((long long) (digits == 1 ? 0 : pow(10, digits-1))) + offset/digits;
    long long digit = (digits - 1) - (offset % digits);


    cout << (num / ((long long) pow(10, digit))) % 10 << "\n";
}

int main() {
    int q; cin >> q;
    while (q--) {
        solve();
    }
}