#include <bits/stdc++.h>
using namespace std;

int n, m;

int road[100];
int speed[100];

void setIO(string s) {
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

int main() {
    setIO("speeding");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;

    int cur = 0;
    for (int i = 0; i < n; i++) {
        int seg, limit; cin >> seg >> limit;
        for (int j = 0; j < seg; j++) {
            road[cur] = limit;
            cur++;
        }
    }
    cur = 0;
    for (int i = 0; i < m; i++) {
        int seg, limit; cin >> seg >> limit;
        for (int j = 0; j < seg; j++) {
            speed[cur] = limit;
            cur++;
        }
    }

    int ans = 0;
    for (int i = 0; i < 100; i++) {
        ans = max(ans, speed[i] - road[i]);
    }
    cout << ans << endl;

    return 0;
}