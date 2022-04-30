#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    int greatest = -1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        greatest = max(greatest, a[i]);
    }
    vector<int> max_val(n);
    set<int> org;
    for (int i = 0; i <= greatest+1; i++) {
        org.insert(i);
    }
    set<int> cur = org;
    for (int i = n-1; i >= 0; i--) {
        cur.erase(a[i]);
        max_val[i] = *(cur.begin()); 
    }
    //for (int i = 0; i < n; i++) cout << max_val[i] << " ";

    vector<int> b;
    int mex = -1;
    int cur_max = max_val[0];
    cur = org;
    for (int i = 0; i < n; i++) {
        cur.erase(a[i]);
        mex = *(cur.begin());
        if (mex == cur_max) {
            b.push_back(mex);
            mex = -1;
            cur = org;
            if (i != n-1) {
                cur_max = max_val[i+1];
            }
        }
    }
    if (mex != -1) {
        b.push_back(mex);
    }

    cout << b.size() << "\n";
    for (int &i: b) {
        cout << i << " ";
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