#include <bits/stdc++.h>
using namespace std;

int counts[26];

void solve() {
    string s;
    cin >> s;
    int n = s.size();

    for (int i = 0; i < n; i++) {
        counts[s[i] - 'A']++;
    }

    string ans = "";
    if (n % 2 == 0) {
        for (char i = 'A'; i <= 'Z'; i++) {
            if (counts[i - 'A'] % 2) {
                cout << "NO SOLUTION\n";
                return;
            } else {
                string part = string(counts[i - 'A'] / 2, i);
                ans = part + ans + part;
            }
        }
        cout << ans << "\n";
    } else {
        char odd = -1;
        for (char i = 'A'; i <= 'Z'; i++) {
            if (counts[i - 'A'] % 2) {
                if (odd != -1) {
                    cout << "NO SOLUTION\n";
                    return;
                }
                odd = i;
            }
        }

        ans = string(counts[odd - 'A'], odd);
        for (char i = 'A'; i <= 'Z'; i++) {
            if (i != odd) {
                string part = string(counts[i - 'A'] / 2, i);
                ans = part + ans + part;
            }
        }
        cout << ans << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}