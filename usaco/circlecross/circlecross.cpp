#include <bits/stdc++.h>
using namespace std;

int last = 51;
vector<vector<int>> crosses(26, vector<int>());

void setIO(string s) {
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

int main() {
    setIO("circlecross");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s; cin >> s;
    for (int i = 0; i <= last; i++) {
        crosses[(int) s[i] - 65].push_back(i);
    } 

    
    int ans = 0;
    for (int i = 0; i <= 24; i++) {
        for (int j = i+1; j <= 25; j++) {
            int lower1 = crosses[i][0];
            int higher1 = crosses[i][1];
            int lower2 = crosses[j][0];
            int higher2 = crosses[j][1];

            if (lower1 < lower2) {
                if (higher1 > lower2 && higher1 < higher2) {
                    ans++;
                }
            }
            else {
                if (higher2 > lower1 && higher2 < higher1) {
                    ans++;
                }
            }
        }
    }
    cout << ans;

    return 0;
}