#include <bits/stdc++.h>
using namespace std;

int n, k;
string words[101];

void setIO(string s) {
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

int main() {
    setIO("word");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> k;

    int cur_line = 0;
    for (int i = 1; i <= n; i++) {
        cin >> words[i];
    }

    string line = "";
    int count = 0;
    for (int i = 1; i <= n; i++) {
        count += words[i].size();
        if (count <= k) {
            if (line == "") {
                line = words[i];
            }
            else {
                line = line + " " + words[i];
            }
        } 
        else {
            cout << line << "\n";
            line = words[i];
            count = words[i].size();
        }
    }

    if (!line.empty()) {
        cout << line << "\n";
    }

    return 0;
}
