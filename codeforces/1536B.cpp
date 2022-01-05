#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    string s; cin >> s;
    unordered_set<string> substrings;
    for (int i = 0; i < s.size(); i++) {
        substrings.insert(s.substr(i, 1));
        if (i < s.size()-1) {
            substrings.insert(s.substr(i, 2));
        }
        if (i < s.size()-2) {
            substrings.insert(s.substr(i, 3));
        }
    }
    
    string alphabet = "abcdefghijklmopqrstuvwxyz";
    for (int i = 0; i < 26; i++) {
        string j = alphabet.substr(i, 1);
        if (substrings.count(j) == 0) {
           cout << j << "\n"; 
           return;
        }
    }

    for (int i = 0; i < 26; i++) {
        string j = alphabet.substr(i, 1);
        for (int k = 0; k < 26; k++) {
            j += alphabet.substr(k, 1);
            if (substrings.count(j) == 0) {
                cout << j << "\n"; 
                return;
            }
            j.pop_back();
        }
    }

    for (int i = 0; i < 26; i++) {
        string j = alphabet.substr(i, 1);
        for (int k = 0; k < 26; k++) {
            j += alphabet.substr(k, 1);
            for (int l = 0; l < 26; l++) {
                j += alphabet.substr(l, 1);
                if (substrings.count(j) == 0) {
                    cout << j << "\n"; 
                    return;
                }
                j.pop_back();
            }
            j.pop_back();
        }
    }

}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--){
        solve();
    }
}