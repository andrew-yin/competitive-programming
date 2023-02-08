#include <bits/stdc++.h>
using namespace std;

long long n, t;
long long k[200000];


bool can_make_in_time(long long time) {
    long long made = 0;
    for (int i = 0; i < n; i++) {
        made += time/k[i];
    }
    return made >= t;
}


void solve() {
    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }

    long long ans = 0;
    long long low = 0;
    long long high = *min_element(k, k+n)*t;
    while (low <= high) {
        long long mid = low + (high - low)/2;
        if (can_make_in_time(mid)) {
            high = mid-1;
            ans = mid;
        }
        else {
            low = mid+1;
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
