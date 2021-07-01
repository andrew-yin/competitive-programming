#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<unordered_set<char>> spotty(100);
vector<unordered_set<char>> plain(100);

void setIO(string s) {
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

int main() {
    setIO("cownomics");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            char k; cin >> k; 
            spotty[j].insert(k);
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            char k; cin >> k;
            plain[j].insert(k);
        }
    }

    int ans = 0;
    for (int i = 0; i < M; i++) {
        bool works = true;
        if ((spotty[i].count('A') && plain[i].count('A')) ||
            (spotty[i].count('C') && plain[i].count('C')) ||
            (spotty[i].count('T') && plain[i].count('T')) ||
            (spotty[i].count('G') && plain[i].count('G'))) {
            works = false;
        }

        if (works) ans++;
    }
    cout << ans;

    return 0;
}