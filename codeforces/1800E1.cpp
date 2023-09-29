#include <bits/stdc++.h>
using namespace std;

#define LL long long

int n, k;
string s, t;
set<string> visited;

void find(string s) {
    if (visited.count(s)) {
        return;
    }

    visited.insert(s);
    for (int i = 0; i < n; i++) {
        if (i + k < n) {
            swap(s[i], s[i + k]);
            find(s);
            swap(s[i], s[i + k]);
        }

        if (i + k + 1 < n) {
            swap(s[i], s[i + k + 1]);
            find(s);
            swap(s[i], s[i + k + 1]);
        }

        if (i - k >= 0) {
            swap(s[i - k], s[i]);
            find(s);
            swap(s[i - k], s[i]);
        }

        if (i - k - 1 >= 0) {
            swap(s[i - k - 1], s[i]);
            find(s);
            swap(s[i - k - 1], s[i]);
        }
    }
}


void solve() {
    cin >> n >> k >> s >> t;

    if (n <= 5) {
        visited.clear();
        find(s);
        cout << (visited.count(t) ? "YES\n" : "NO\n");
        return;
    }

    vector<int> c(26, 0);
    for (char &i: s) {
        c[i - 'a']++;
    }
    for (char &i: t) {
        c[i - 'a']--;
    }
    cout << (count(c.begin(), c.end(), 0) == 26 ? "YES\n" : "NO\n");
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
