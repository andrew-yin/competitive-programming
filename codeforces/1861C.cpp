#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    string s; cin >> s;

    int max_sorted = 0;
    int min_unsorted = INT_MAX;
    int len = 0;

    for (char &i: s) {
        if (i == '+') {
            len++;
        } 
        else if (i == '-') {
            len--;
            max_sorted = min(len, max_sorted);
            if (min_unsorted == len+1) {
                min_unsorted = INT_MAX;
            }
        }
        else if (i == '0') {
            if (len < 2) {
                cout << "NO\n";
                return;
            }
            if (min_unsorted > len) {
                min_unsorted = len;
            }
        }
        else { // 1
            max_sorted = len;
        }
        if (min_unsorted <= max_sorted && min_unsorted != INT_MAX) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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
