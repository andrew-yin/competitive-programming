#include <bits/stdc++.h>
using namespace std;

int n;
string before[7];
string after[7];

string cows[8] = {"Beatrice", "Belinda", "Bella", "Bessie", "Betsy", "Blue", "Buttercup", "Sue"};

void setIO(string s) {
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

int main() {
    setIO("lineup");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        string words[6];
        for (int j = 0; j < 6; j++) {
            cin >> words[j];
        }
        before[i] = words[0];
        after[i] = words[5];
    }

    do {
        bool works = true;
        for (int i = 0; i < n; i++) {
            int b, a;
            for (int j = 0; j < 8; j++) {
                if (before[i] == cows[j]) {
                    b = j;
                }
                if (after[i] == cows[j]) {
                    a = j;
                }
            }
            if (abs(b-a) != 1) {
                works = false;
                break;
            }
        }
        if (works) {
            for (int i = 0; i < 8; i++) {
                cout << cows[i] << "\n";
            }
            break;
        }
    }
    while (next_permutation(cows, cows+8));

    return 0;
}