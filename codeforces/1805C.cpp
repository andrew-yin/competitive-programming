#include <bits/stdc++.h>
using namespace std;

#define LL long long

LL calc(int a, int b, int c, int x) {
    return 1LL*x*x - 1LL*2*b*x + 1LL*b*b - 1LL*4*a*c;
}

void solve() {
    int n, m; cin >> n >> m;
    set<int> ks;
    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        ks.insert(k);
    }
    vector<int> lines(ks.begin(), ks.end());


    for (int i = 0; i < m; i++) {
        int a, b, c; cin >> a >> b >> c;

        if (1LL*a*c < 0) {
            cout << "NO\n";
        }
        else {
            int l = 0; int r = lines.size()-1;
            bool found = false;
            while (l <= r) {
                int m = l + (r - l)/2;

                if (calc(a, b, c, lines[m]) < 0) {
                    cout << "YES\n" << lines[m] << "\n";
                    found = true;
                    break;
                }


                if (m > 0 && calc(a, b, c, lines[m-1]) < calc(a, b, c, lines[m])) {
                    r = m-1;
                }
                else {
                    l = m+1;
                }
            }

            if (!found) {
                cout << "NO\n";
            }
        }
    }
    return;
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
