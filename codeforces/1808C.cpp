#include <bits/stdc++.h>
using namespace std;

#define LL long long

string a, b;

bool visited[19][10][10][2][2]; // visited[i][min][max][lo][hi]
string ans;
int ans_l;

void find_unlucky(string cur, int i, int mini, int maxi, bool lo, bool hi) {
    if (i == a.size()) {
        if (maxi - mini < ans_l) {
            ans_l = maxi - mini;
            ans = cur;
        }
        return;
    }
    if (visited[i][mini][maxi][lo][hi]) return;
    visited[i][mini][maxi][lo][hi] = true;
    
    char low = lo ? a[i] : '0';
    char high = hi ? b[i] : '9';
    
    for (char j = low; j <= high; j++) {
        int nmin = min(mini, j - '0');
        int nmax = max(maxi, j - '0');
        bool nlo = lo && j == a[i];
        bool nhi = hi && j == b[i]; 
        find_unlucky(cur + j, i+1, nmin, nmax, nlo, nhi);
    }
}

void solve() {
    cin >> a >> b;
    if (a.size() != b.size()) {
        for (int i = 0; i < a.size(); i++) cout << "9";
        cout << "\n";
        return;
    }

    memset(visited, false, sizeof(visited));
    ans.clear();
    ans_l = 10;

    find_unlucky("", 0, 9, 0, true, true);
    cout << ans << "\n";
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
