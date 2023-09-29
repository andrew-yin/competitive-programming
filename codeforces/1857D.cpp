#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int N = 2E5;
int a[N];
int b[N];
int diff[N];


void solve() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        diff[i] = a[i] - b[i];
    }

    vector<int> ans;
    ans.push_back(1);
    int m = diff[0];
    for (int i = 1; i < n; i++) {
        if (diff[i] > m) {
            ans.clear();
            ans.push_back(i+1);
            m = diff[i];
        }
        else if (diff[i] == m) {
            ans.push_back(i+1);
        }
    }
    cout << ans.size() << "\n"; 
    for (int &i: ans) {
        cout << i << " ";
    }
    cout << "\n";
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
