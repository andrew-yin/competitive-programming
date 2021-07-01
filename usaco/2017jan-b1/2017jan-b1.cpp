#include <bits/stdc++.h>
using namespace std;

int N;
unordered_map<string, int> entries;

void setIO(string s) {
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

int main() {
    setIO("notlast");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++) {
        string s; int j; cin >> s >> j;
        entries[s] += j;
    }

    int hi = INT_MAX;
    vector<string> cows = {"Bessie", "Elsie", "Daisy", "Gertie", "Annabelle", "Maggie", "Henrietta"};
    for (string cow : cows) {
        hi = min(hi, entries[cow]);
    }

    int second = INT_MAX;
    for (auto i : entries) {
       if (i.second > hi) {
           second = min(second, i.second);
       } 
    }

    int count = 0;
    string ans = "";
    for (auto i : entries) {
        if (i.second == second) {
            ans = i.first;
            count++;
        }   
    }

    if (second == INT_MAX || count > 1) {
        cout << "Tie\n";
    }
    else {
        cout << ans << "\n";    
    }


    return 0;
}