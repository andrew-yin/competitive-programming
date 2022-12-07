#include <bits/stdc++.h>
using namespace std;

int n, m;
int city[100000];
int tower[100000];


void solve() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> city[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> tower[i];
    }

    int j = 0;
    int ans = -1;
    for (int i = 0; i < n; i++) {
        while (j < m-1 && abs(tower[j] - city[i]) >= abs(tower[j+1] - city[i])) {
            j++;
        }
        ans = max(ans, abs(tower[j] - city[i]));
    }
    cout << ans << "\n";
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}
