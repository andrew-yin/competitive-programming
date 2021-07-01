#include <bits/stdc++.h>
using namespace std;

int n;
int counts[26] = {0};

void setIO(string s) {
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

int main() {
    setIO("blocks");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        string word1, word2; cin >> word1 >> word2;
        int counts1[26] = {0};
        int counts2[26] = {0};
        for (char j : word1) {
            counts1[(int) j - 97]++;
        } 
        for (char j : word2) {
            counts2[(int) j - 97]++;
        } 
        for (int i = 0; i < 26; i++) {
            counts[i] += max(counts1[i], counts2[i]);
        }
    }

    string spacer = "";
    for (int i = 0; i < 26; i++) {
        cout << spacer << counts[i];
        spacer = "\n";
    }

    return 0;
}