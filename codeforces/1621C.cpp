#include <bits/stdc++.h>
using namespace std;

#define LL long long

const int N = 1E4+1;

int q[N];

int ask(int i) {
    cout << "? " << i << endl;
    int j; cin >> j;
    return j;
}

void solve() {
    int n; cin >> n;
    memset(q, -1, sizeof(q));
    for (int i = 1; i <= n; i++) {
        if (q[i] == -1) {
            vector<int> cycle;
            int start = ask(i);
            cycle.push_back(start);

            int j = -1;
            while (j != start) {
                cout << "? " << i << endl;
                cin >> j;
                cycle.push_back(j);
            }
            for (int k = 1; k < cycle.size(); k++) {
                q[cycle[k-1]] = cycle[k];
            }
        }
    }
    cout << "! ";
    for (int i = 1; i <= n; i++) {
        cout << q[i] << " ";
    } 
    cout << endl;
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
