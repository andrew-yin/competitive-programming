#include <bits/stdc++.h>
using namespace std;

void solve() {
    /*
    if more than two positive, false
    if more than two negative, false
    otherwise brute force
    */
    int n; cin >> n;
    int pos_ct = 0;
    int neg_ct = 0;
    int zero_ct = 0;

    vector<int> a;
    bool returned = false;
    for (int i = 0; i < n; i++) {
        int j; cin >> j;
        if (j > 0) {
            pos_ct++;
            if (pos_ct > 2) {
                returned = true;
            }
            else {
                valids.push_back(j);
            }
        }
        else if (j < 0) {
            neg_ct++;
            if (neg_ct > 2) {
                returned = true;
            }
            else {
                valids.push_back(j);
            }
        }
        else {
            zero_ct++;
            if (zero_ct <= 2) {
                valids.push_back(j);
            }
        }
    }
    
    if (returned) {
        cout << "NO\n";
        return;
    }


    unordered_set<int> unique(valids.begin(), valids.end());
    int m = valids.size();
    for (int i = 0; i < m; i++) {
        for (int j = i+1; j < m; j++) {
            for (int k = j+1; k < m; k++) {
                if (!unique.count(valids[i] + valids[j] + valids[k])) {
                    cout << "NO\n";
                    return;
                }
            }
        }
    }
    cout << "YES\n";
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
