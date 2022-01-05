#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    vector<int> a(n); 
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> sorted = a;
    sort(sorted.begin(), sorted.end());
    int mismatch = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != sorted[i]) {
            mismatch++;
        }
    }
    if (mismatch == 2 || mismatch == 0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return;
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    solve();
}