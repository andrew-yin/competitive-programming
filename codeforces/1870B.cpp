#include <bits/stdc++.h>
using namespace std;

#define ll long long

/*
notes

- don't need to use a single b_j more than once
- if a[n] is even length, you can't maximize it further
    - minimize by or-ing all elements of b_j
- if a[n] is odd length, cannot minimize further
    - maximize by or-ing all elements of b_j
*/

const int N = 2E5;
int a[N];
int b[N];

int n, m;

void solve() {
    int B = 0;
    int ans1 = 0;
    int ans2 = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ans1 ^= a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        B |= b[i];
    }

    for (int i = 0; i < n; i++) {
        ans2 ^= (a[i] | B);
    }
    if (n % 2) {
        cout << ans1 << " " << ans2 << "\n";
    }
    else {
        cout << ans2 << " " << ans1 << "\n";
    }
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
