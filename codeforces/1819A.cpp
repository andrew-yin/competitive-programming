#include <bits/stdc++.h>
using namespace std;

const int N = 2E5;
int n;
int a[N];

int compute_mex(set<int> s) {
    int mex = 0;
    while (s.count(mex)) {
        mex++;
    }
    return mex;
}

void solve() {
    int n; cin >> n;
    set<int> unique;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        unique.insert(a[i]);
    }

    int mex = compute_mex(unique); 
    if (mex == n) {
        cout << "No\n";
        return;
    }
    
    int l = -1; int r = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == mex+1) {
            r = i;
            if (l == -1) {
                l = i;
            }
        }
    }
    
    if (l == -1) {
        cout << "Yes\n";
        return;
    }

    unique.clear();
    for (int i = l; i <= r; i++) {
        a[i] = mex;
    }
    for (int i = 0; i < n; i++) {
        unique.insert(a[i]);
    }
    cout << ((compute_mex(unique) == mex+1) ? "Yes\n" : "No\n");
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
