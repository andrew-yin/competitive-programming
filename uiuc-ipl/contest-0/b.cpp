#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    int count = 0;
    vector<int> moves;
    for (int i=0; i<s.size()-1; i++) {
        if (s[i] == 'W') {
            s[i] = 'B';
            if (s[i+1] == 'W') {
                s[i+1] = 'B';
            }
            else {
                s[i+1] = 'W';
            }
            count++;
            moves.push_back(i);
        } 
    }
    if (s[s.size()-1] == 'B') {
        cout << count << " ";
        for (int i: moves) {
            cout << i << " ";
        }
        return;
    }
    for (int i=0; i<s.size()-1; i++) {
        if (s[i] == 'B') {
            s[i] = 'W';
            if (s[i+1] == 'W') {
                s[i+1] = 'B';
            }
            else {
                s[i+1] = 'W';
            }
            count++;
            moves.push_back(i);
        } 
    }
    if (s[s.size()-1] == 'W') {
        cout << count << " ";
        for (int i: moves) {
            cout << i << " ";
        }
    }
    else {
        cout << "-1";
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
	return 0;
}
