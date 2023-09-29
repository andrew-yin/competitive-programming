#include <bits/stdc++.h>
using namespace std;

#define LL long long

int n;
string s;

bool test(char c, string s) {
    vector<int> moves;
    for (int i = 0; i < n-1; i++) {
        if (s[i] != c) {
            s[i] = (s[i] == 'B') ? 'W' : 'B';
            s[i+1] = (s[i+1] == 'B') ? 'W' : 'B';
            moves.push_back(i);
        }
    }
    if (s[n-1] == c) {
        cout << moves.size() << "\n";
        for (int &i: moves) {
            cout << i+1 << " ";
        }
        cout << "\n";
        return true;
    }
    return false;
}

void solve() {
    cin >> n >> s;

    if (!test('B', s) && !test('W', s)) {
        cout << "-1\n";
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}
