#include <bits/stdc++.h>
using namespace std;

#define ll long long

/*
notes

keep track of L and R for each number

go from K to 1
update L and R with min_L and max_R
*/

const int N = 1E5+1;
int a[N];

int n, k;

void solve() {
    cin >> n >> k;

    vector<int> l(k+1);   
    vector<int> r(k+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];

        if (l[a[i]] == 0) {
            l[a[i]] = i;
        }
        r[a[i]] = i;
    }

    int min_l = INT_MAX; int max_r = -1;

    for (int i = k; i >= 1; i--) {
        if (l[i] == 0 || r[i] == 0) {
            continue;
        }
        min_l = min(l[i], min_l);
        max_r = max(r[i], max_r);
        l[i] = min_l;
        r[i] = max_r;
        // cout << i << " is " << l[i] << ", " << r[i] << "\n";
    }

    for (int i = 1; i <= k; i++) {
        if (l[i] == 0 || r[i] == 0) {
            cout << "0 ";
        }
        else {
            cout << (r[i] - l[i] + 1)*2 << " ";
        }
    }
    cout << "\n";
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
