#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

long long a[100000];
 
void solve() {
    int n; cin >> n;
    int prev = -1;
    for (int i = 0; i < n; i++) {
        int j; cin >> j;
        while (j % 2 == 0) {
            j /= 2;
        }
        while (j % 3 == 0) {
            j /= 3;
        }
        if (prev == -1) {
            prev = j;
        }
        else {
            if (j != prev) {
                cout << "No";
                return;
            }
        }
    }
    cout << "Yes";
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    solve();
}