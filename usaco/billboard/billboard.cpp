#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

int main() {
    setIO("billboard");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int first[2][2], second[2][2], truck[2][2];
    cin >> first[0][0] >> first[1][0] >> first[0][1] >> first[1][1];
    cin >> second[0][0] >> second[1][0] >> second[0][1] >> second[1][1];
    cin >> truck[0][0] >> truck[1][0] >> truck[0][1] >> truck[1][1];

    int ans = (first[0][1]-first[0][0])*(first[1][1]-first[1][0])
               - (max(min(first[0][1], truck[0][1]) - max(first[0][0], truck[0][0]), 0))
                  * (max(min(first[1][1], truck[1][1]) - max(first[1][0], truck[1][0]), 0))
            + (second[0][1]- second[0][0])*(second[1][1]-second[1][0])
               - (max(min(second[0][1], truck[0][1]) - max(second[0][0], truck[0][0]), 0))
                  * (max(min(second[1][1], truck[1][1]) - max(second[1][0], truck[1][0]), 0));
    cout << ans;

    return 0;
}