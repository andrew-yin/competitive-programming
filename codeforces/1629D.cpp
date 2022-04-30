#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    vector<string> words(n);
    unordered_set<string> seen;
    for (int i = 0; i < n; i++) {
        cin >> words[i];
        seen.insert(words[i]);
    }

    for (string &i: words) {
        string rev(i.rbegin(), i.rend());
        if (rev == i) {
            cout << "YES\n"; return;
        }
        else if (seen.count(rev)) {
            cout << "YES\n"; return;
        }
        else if (i.size() == 3) {
            string p1 = i.substr(0,2);
            string p2 = i.substr(1,2);
            string revp1(p1.rbegin(), p1.rend());
            string revp2(p2.rbegin(), p2.rend());
            if (seen.count(revp1) || seen.count(revp2)) {
                cout << "YES\n"; return;
            }
        }
    }
    cout << "NO\n";
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--){
        solve();
    }
}