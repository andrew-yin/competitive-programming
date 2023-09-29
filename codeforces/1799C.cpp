#include <bits/stdc++.h>
using namespace std;

#define ll long long

string s;

void solve() {
    cin >> s; 

    int n = s.size();
    int ct[26] {};
    for (int i = 0; i < n; i++) {
        ct[s[i] - 'a']++;
    }

    string t(n, '?');
    int l = 0, r = n-1;
    for (char i = 'a'; i <= 'z'; i++) {
        while (ct[i - 'a'] >= 2) {
            t[l++] = t[r--] = i;
            ct[i - 'a'] -= 2;
        }

        if (ct[i - 'a']) {
            ct[i - 'a'] = 0;
            if (l == r) {
                t[l] = i;
            }
            else {
                char next = i + 1;
                while (ct[next - 'a'] == 0) {
                    next++;
                }
                if (ct[next - 'a'] == r - l) {
                    while (ct[next - 'a'] >= 2) {
                        t[l++] = t[r--] = next;
                        ct[next - 'a'] -= 2;
                    }
                    if (ct[next - 'a']) {
                        t[l++] = next;
                    }
                    t[l] = i;
                }
                else {
                    for (char j = next; j <= 'z'; j++) {
                        if (ct[j - 'a']) {
                            for (int k = 0; k < ct[j - 'a']; k++) {
                                t[l++] = j;
                            }
                        }
                    }
                    t[l] = i;
                }
            }
            break;
        }
    }
    cout << t << "\n";
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
