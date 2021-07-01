#include <bits/stdc++.h>
using namespace std;

int N;
unsigned long long x[200000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }
    unsigned long long ans = 0;
    unsigned long long max = *max_element(x, x+n);
    for (int i = 0; i < N; i++) {
        if (x[i] > x[i+1]) {
            ans += max - x[i] - x[i+1];
            x[i+1] = x[i];
        }
    }
    cout << ans;
    return 0;
}
