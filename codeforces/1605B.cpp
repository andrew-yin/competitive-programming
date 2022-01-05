#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    string s; cin >> s;
    vector<int> one_idxs;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            one_idxs.push_back(i);
        }
    }
    int one_ct = one_idxs.size();

    vector<int> zero_idxs;
    for (int i = n-one_ct; i < n; i++) {
        if (s[i] == '0') {
            zero_idxs.push_back(i);
        }
    }
    int zero_ct = zero_idxs.size();
    if (zero_ct == 0) {
        cout << "0\n";
        return;
    }
    cout << "1\n" << zero_ct*2 << " ";
    for (int i = 0; i < zero_ct; i++) {
        cout << one_idxs[i]+1 << " ";
    }
    for (int i = 0; i < zero_ct; i++) {
        cout << zero_idxs[i]+1 << " ";
    }
    cout << "\n";
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--){
        solve();
    }
}