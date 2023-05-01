// Author: Andrew Yin
// Date: Summer 2021

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b; cin >> a >> b;
    string s;  cin >> s;

    if (s.size() % 2 == 0 && (a % 2 != 0 || b % 2 != 0)) {
        cout << "-1\n";
        return;
    } 

    int zero_count = a;
    int one_count = b;

    int bound = s.size() % 2 == 0 ? (s.size()-1)/2 : (s.size()-2)/2;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '?') {
            if (s[i] == '1') {
                one_count--;
            }
            else {
                zero_count--;
            }

            if (s[s.size() - (i + 1)] != '?') {
                if (s[i] != s[s.size() - (i + 1)]) {
                    cout << "-1\n";
                    return;
                }
            }
            else {
                s[s.size() - (i + 1)] = s[i];
                if (i > )
            }
        }
    }

    if (s.size() % 2 != 0 && s[(s.size()-1)/2] == '?') {
        if (a % 2 != 0) {
            s[s.size()/2] = '0';
            zero_count--;
        }
        else if (b % 2 != 0) {
            s[s.size()/2] = '1';
            one_count--;
        }
        else {
            cout << "-1\n";
            return;
        }
    }

    int questions = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '?') {
            questions++;
        }
    }

    if (zero_count < 0 || one_count < 0 || questions != zero_count + one_count) {
        cout << "-11\n";
        return;
    }
    
    for (int i = 0; i <= bound; i++) {
        if (s[i] == '?') {
            if (zero_count >= 2) {
                s[i] = '0';
                s[s.size() - (i+1)] = '0';
                zero_count -= 2;
            }
            else if (one_count >= 2) {
                s[i] = '1';
                s[s.size() - (i+1)] = '1';
                one_count -= 2;
            }
            else {
                cout << "-1\n";
                return;
            }
        }
    }
    cout << s << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
