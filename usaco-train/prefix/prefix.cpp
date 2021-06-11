/*
ID: andrewy8
TASK: prefix 
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

ifstream fin("prefix.in");
ofstream fout("prefix.out");

vector<string> prefixes;
string S;
bool dp[200001];
int ans = 0;

void read() {
    string prefix; fin >> prefix;
    do {
        prefixes.push_back(prefix);
        fin >> prefix;
    }
    while (prefix != ".");

    fin >> S;
    string S_sub;
    while (fin >> S_sub) {
        S += S_sub;
    }
    fin.close();
}

void solve() {
    dp[0] = true;
    unordered_set<string> a;
    for (int i = 0; i < S.size(); i++) {
        if (dp[i]) {
            for (const string& j : prefixes) {
                if (j == S.substr(i, j.length())) {
                    dp[i + j.length()] = true;
                    ans = i + j.length();
                }
            }
       }
    }
}

void out() {
    fout << ans << "\n"; fout.close();
}

int main() {
    read();
    solve();
    out();
    return 0;
}