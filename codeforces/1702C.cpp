#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;

    map<int, vector<int>> occurences;
    for (int i = 0; i < n; i++) {
        int j; cin >> j;
        occurences[j].push_back(i);
    }

    for (int i = 0; i < k; i++) {
        int a, b; cin >> a >> b;
        if (occurences.count(a) && occurences.count(b)) {
            if (occurences[a][0] < occurences[b][occurences[b].size()-1]) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
        }
        else {
            cout << "NO\n";
        }
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
