#include <bits/stdc++.h>
using namespace std;

unsigned long long x[200000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    unsigned long long ans = 0;
    for (int i = 1; i < n; i++) {
        if (x[i] < x[i - 1]) {
            ans += x[i - 1] - x[i];
            x[i] = x[i - 1];
        }
    }
    cout << ans << "\n";
}
