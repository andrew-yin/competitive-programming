#include <bits/stdc++.h>
using namespace std;

#define LL long long

const int N = 3E5;

LL ans[N];
LL max_subarray[N];

void solve() {
    int n; cin >> n;
    vector<LL> pos; vector<LL> neg;
    int maxi = INT_MIN, mini = INT_MAX;
    for (int i = 0; i < n; i++) {
        int j; cin >> j;
        if (j >= 0) {
            pos.push_back(j);
        }
        else {
            neg.push_back(j);
        }
        maxi = max(maxi, j);
        mini = min(mini, j);
    }
    
    if (neg.size() == 0) {
        cout << "No\n";
        return;
    }

    int limit = maxi - mini;
    sort(pos.begin(), pos.end());
    sort(neg.rbegin(), neg.rend());

    ans[0] = pos[0];
    max_subarray[0] = pos[0];
    int pidx = 1;
    int nidx = 0;

    for (int i = 1; i < n; i++) {
        if (pidx >= pos.size()) {
            ans[i] = neg[nidx];
            nidx++;
        }
        else if (max_subarray[i-1] + pos[pidx] >= limit) {
            if (nidx >= neg.size()) {
                cout << "No\n";
                return;
            }
            ans[i] = neg[nidx];
            nidx++;
        }
        else {
            ans[i] = pos[pidx];
            pidx++;
        }
        max_subarray[i] = max(ans[i], max_subarray[i-1]+ans[i]);
    } 
    if (max_subarray[n-1] >= limit) {
        cout << "No\n";
        return;
    }

    cout << "Yes\n";
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
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
