#include <bits/stdc++.h>
using namespace std;

int K, N;
int rankings[11][21];

void setIO(string s) {
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

int main() {
    setIO("gymnastics");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> K >> N; 
    for (int i = 1; i <= K; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> rankings[i][j];
        }
    }

    int ans = 0;
    for (int i = 1; i <= N - 1; i++) {
        for (int j = i + 1; j <= N; j++) {
            int i_b4_j = 0, j_b4_i = 0; 
            for (int k = 1; k <= K; k++) {
                int i_idx; int j_idx;
                for (int l = 1; l <= N; l++) {
                    if (rankings[k][l] == i) i_idx = l;
                    if (rankings[k][l] == j) j_idx = l;
                }
                if (i_idx > j_idx) {
                    i_b4_j++;
                }
                else {
                    j_b4_i++;
                }
            }
            if ((i_b4_j && !j_b4_i) || (!i_b4_j && j_b4_i)) {
                ans++;
            }
        }   
    }
    cout << ans;

    return 0;
}