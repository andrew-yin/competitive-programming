#include <bits/stdc++.h>
using namespace std;

int n = 100;

void setIO(string s) {
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

int main() {
    setIO("shell");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n; 
    int swap1[n], swap2[n], guess[n];
    for (int i = 0; i < n; i++) {
        cin >> swap1[i] >> swap2[i] >> guess[i];
    }

    int ans = -1;
    for (int start = 1; start <= 3; start++) {
        int score = 0;
        int shell = start;
        for (int i = 0; i < n; i++) {
            if (shell == swap1[i]) {
                shell = swap2[i];
            }
            else if (shell == swap2[i]) {
                shell = swap1[i];
            }
            if (guess[i] == shell) {
                score++;
            }
        }
        if (score > ans) {
            ans = score;
        }
    }
    cout << ans;

    return 0;
}