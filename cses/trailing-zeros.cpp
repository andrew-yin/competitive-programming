#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    uint64_t n;
    cin >> n;

    uint64_t ans = 0;
    for (uint64_t i = 5; i <= n; i *= 5) {
        ans += n / i;
    }
    cout << ans << "\n";
}
