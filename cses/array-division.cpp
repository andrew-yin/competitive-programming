#include <bits/stdc++.h>
using namespace std;

int n, k;
long long x[200000];


bool achievable(long long s) {
    int subarrays = 0;
    long long cur = 0;
    for (int i = 0; i < n; i++) {
        if (x[i] > s) {
            return false;
        }
        if (cur + x[i] > s) {
            subarrays++;
            cur = 0;
        }
        cur += x[i];
    }
    if (cur > 0) {
        subarrays++;
    }
    return subarrays <= k;
}

void solve() {
    cin >> n >> k;
    long long low = 0; long long high = 0;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        high += x[i];
    }

    long long ans = -1;
    while (low <= high) {
        long long mid = low + (high - low)/2;
        if (achievable(mid)) {
            high = mid - 1;
            ans = mid;
        }
        else {
            low = mid + 1;
        }
    }
    cout << ans << "\n";
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}
