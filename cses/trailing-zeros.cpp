// Author: Andrew Yin
// Date: Summer 2021

#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    unsigned long long ans = 0;
    for (unsigned long long i = 5; n / i > 0; i *= 5) {
        ans += n / i;
    }
    cout << ans;

    return 0;
}
