#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n, k;

const int N = 1000;
ll a[N];

bool possible(ll m) {
    for (int i = 0; i < n; i++) {
        if (a[i] >= m) {
            return true;
        }

        ll required = m;
        ll cost = 0;

        for (int j = i; j < n-1; j++) {
            cost += required - a[j];

            if (a[j] <= a[j+1] && a[j+1] >= required-1) {
                if (cost <= k) {
                    return true;
                }
                else {
                    break;
                }
            } 
            required--;
        }
    }
    return false;
}

void solve() {
    cin >> n >> k;

    ll m = -1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m = max(m, a[i]);
    }

    ll low = 0; ll high = m + k;

    ll ans = -1;
    while (low <= high) {
        ll mid = low + (high - low)/2;
        if (possible(mid)) {
            ans = max(ans, mid);
            
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
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
