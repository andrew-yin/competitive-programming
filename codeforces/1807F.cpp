#include <bits/stdc++.h>
using namespace std;

#define ll long long

unordered_map<int, unordered_map<int, unordered_set<string>>> seen;

int n, m, ii, jj, i2, j2;
string d;

bool on_line(int i, int j, int new_i, int new_j) {
    if (j == new_j) {
        return (new_i == i2 && new_j == j2);
    }
    return i2 - i == (i-new_i)/(j-new_j)*(j2 - j)
        && min(i, new_i) <= i2 && i2 <= max(i, new_i)
        && min(j, new_j) <= j2 && j2 <= max(j, new_j);
}

void solve() {
    seen.clear();
    cin >> n >> m >> ii >> jj >> i2 >> j2 >> d;

    int i = ii; int j = jj;
    int bounces = 0;
    while (!seen[i][j].count(d)) {
        seen[i][j].insert(d);

        int new_i = 0, new_j = 0, dist = 0;
        string new_d = "";
        if (d == "DR") {
            dist = min(n - i, m - j);
            new_i = i + dist;
            new_j = j + dist;
        }
        else if (d == "UL") {
            dist = min(i-1, j-1);
            new_i = i - dist;
            new_j = j - dist;
        }
        else if (d == "UR") {
            dist = min(i-1, m - j);
            new_i = i - dist;
            new_j = j + dist;
        }
        else {
            dist = min(n - i, j-1);
            new_i = i + dist;
            new_j = j - dist;
        }

        if (new_i == 1 && new_j == 1 && d == "UL") {
            new_d = "DR";
        }
        else if (new_i == 1 && new_j == m && d == "UR") {
            new_d = "DL";
        }
        else if (new_i == n && new_j == 1 && d == "DL") {
            new_d = "UR";
        }
        else if (new_i == n && new_j == m && d == "DR") {
            new_d = "UL";
        }
        else if (d == "DR") {
            new_d = new_j == m ? "DL" : "UR";
        }
        else if (d == "DL") {
            new_d = new_j == 1 ? "DR" : "UL";
        }
        else if (d == "UR") {
            new_d = new_j == m ? "UL" : "DR";
        }
        else {
            new_d = new_j == 1 ? "UR" : "DL";
        }

        // cout << new_i << ", " << new_j << ", " << new_d << "\n";
        if (on_line(i, j, new_i, new_j)) {
            cout << bounces << "\n";
            return;
        }
        bounces++;

        i = new_i;
        j = new_j;
        d = new_d;
    }
    cout << "-1\n";
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
