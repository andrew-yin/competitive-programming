#include <bits/stdc++.h>
using namespace std;

string s;
string p = "";

vector<bool> chosen(8, false);
unordered_set<string> seen;
vector<string> perms;

void generate() {
    if (p.size() == s.size()) {
        if (!seen.count(p)) {
            perms.push_back(p);
            seen.insert(p);
        }
    }
    else {
        for (int i = 0; i < s.size(); i++) {
            if (chosen[i]) continue;
            chosen[i] = true;
            p.push_back(s[i]);
            generate();
            chosen[i] = false;
            p.pop_back();
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> s;
    generate();
    cout << perms.size() << "\n";
    sort(perms.begin(), perms.end());
    for (string i : perms) {
        cout << i << "\n";
    }


    return 0;
}