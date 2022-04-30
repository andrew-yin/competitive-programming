#include <bits/stdc++.h>
using namespace std;

int a[200000];
 
void solve(){
    int n; cin >> n;
    long long total = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }

    long long needed = (total+1)/2;
    long long cur = 0;
    for (int i = 0; i < n; i++) {
        cur += a[i];
        if (cur >= needed) {
            cout << i+1;
            return;
        }
    }
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    solve();
}