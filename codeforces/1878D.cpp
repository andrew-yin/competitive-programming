#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int N = 2E5;
int n, k, l[N], r[N], q, ct[N];
string s;

void solve() {
    memset(ct, 0, sizeof(ct));
    cin >> n >> k >> s;
    for (int i = 0; i < k; i++) {
        cin >> l[i];
        l[i]--;
    }
    for (int i = 0; i < k; i++) {
        cin >> r[i];
        r[i]--;
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        int x; cin >> x;
        ct[x-1]++;
    }

    for (int i = 0; i < k; i++) {
        int sum = 0;
        int n = r[i] - l[i] + 1;
        for (int j = 0; j < n/2; j++) {
            sum += ct[l[i]+j] + ct[l[i] + n-1-j];
            if (sum % 2) {
                swap(s[l[i]+j], s[l[i] + n-1-j]);
            }
        }
    }
    cout << s << "\n";
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
