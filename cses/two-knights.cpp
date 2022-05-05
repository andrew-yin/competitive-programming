#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    unsigned long long n;
    cin >> n;
    for (unsigned long long k = 1; k <= n; k++) {
        cout << k * k * (k * k - 1) / 2 - 4 * (k - 1) * (k - 2) << "\n";
    }
}