#include <bits/stdc++.h>
using namespace std;

#define LL long long

void solve() {
    string s; cin >> s;
    int n = s.size();

    int i = 0;
    while (i < n && s[i] != '1') {
        if (s[i] == '?') {
            s[i] = '0';
        }
        i++;
    }

    vector<pair<int, int>> q;
    while (i < n) {
        if (s[i] == '?') {
            int start = i;
            while (i < n && s[i] == '?') {
                i++;
            }
            int end = i;
            q.push_back(pair<int, int>(start, end));
        }
        else {
            i++;
        }
    }

    for (auto &i : q) {
        int start = i.first;
        int end = i.second;

        char fill = '0';
        if (s[start-1] == '1' || (s[start-1] == '0' && end == n) || s[end] == '1') {
            fill = '1';
        }

        for (int j = start; j < end; j++) {
            s[j] = fill;
        }
    }
    cout << s << "\n";
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
