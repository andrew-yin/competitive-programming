#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b; cin >> a >> b;
    string s;  cin >> s;
    int n = s.size();
    
    for (int i = 0; i < n/2; i++) {
        if (s[i] == '0') {
            if (s[n-1-i] == '0') {
                a -= 2;
            }
            else if (s[n-1-i] == '?') {
                a -= 2;                
                s[n-1-i] = '0';
            }
            else {
                cout << "-1\n";
                return;
            }
        }
        else if (s[i] == '1') {
            if (s[n-1-i] == '1') {
                b -= 2;
            }
            else if (s[n-1-i] == '?') {
                b -= 2;                
                s[n-1-i] = '1';
            }
            else {
                cout << "-1\n";
                return;
            }
        }
        else {
            if (s[n-1-i] == '0') {
                s[i] = '0';
                a -= 2;
            } 
            else if (s[n-1-i] == '1') {
                s[i] = '1';
                b -= 2;
            }
        }
    }
    if (n % 2) {
        if (s[n/2] == '0') {
            a--;
        }
        else if (s[n/2] == '1') {
            b--;
        }
        else {
            if (a % 2 == 1 && b % 2 == 0) {
                s[n/2] = '0';
                a--;
            }
            else if (a % 2 == 0 && b % 2 == 1) {
                s[n/2] = '1';
                b--;
            }
            else {
                cout << "-1\n";
                return;
            }
        }
    } 
    
    if (a < 0 || b < 0) {
        cout << "-1\n";
        return; 
    }
    

    int i = 0;
    while (i < n/2 && a >= 2) {
        if (s[i] == '?') {
            s[i] = '0';
            s[n-1-i] = '0';
            a -= 2;
        }
        i++;
    }
    if (a == 1) {
        cout << "-1\n";
        return;
    }

    while (i < n/2 && b >= 2) {
        if (s[i] == '?') {
            s[i] = '1';
            s[n-1-i] = '1';
            b -= 2;
        }
        i++;
    }
    if (b == 1) {
        cout << "-1\n";
        return;
    }
    
    while (i < n/2) {
        if (s[i] == '?') {
            cout << "-1\n";
            return;
        }
        i++;
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
