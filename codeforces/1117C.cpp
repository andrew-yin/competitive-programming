#include <bits/stdc++.h>
using namespace std;
using ll = long long;


ll x_start, y_start, x_end, y_end, n;
char s[100001];


bool reachable(ll days) {
    ll x = x_start; ll y = y_start;
    ll j = days/n;
    for (int i = 0; i < (days % n); i++) {
        if (s[i] == 'U') {
            y += j + 1;
        }
        else if (s[i] == 'D') {
            y -= j + 1;
        }
        else if (s[i] == 'L') {
            x -= j + 1;
        }
        else {
            x += j + 1;
        }
    }
    for (int i = days % n; i < n; i++) {
        if (s[i] == 'U') {
            y += j;
        }
        else if (s[i] == 'D') {
            y -= j;
        }
        else if (s[i] == 'L') {
            x -= j;
        }
        else {
            x += j;
        }
    }

    ll dist = abs(x_end - x) + abs(y_end - y);
    return dist <= days;
}


void solve() {
    cin >> x_start >> y_start >> x_end >> y_end >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    ll dist = abs(x_end - x_start) + abs(y_end - y_start);
    ll low = 0; ll high = n * dist;
    while (low <= high) {
        ll mid = low + (high - low)/2;
        if (reachable(mid)) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    cout << (low > n * dist ? -1 : low) << "\n";
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}
