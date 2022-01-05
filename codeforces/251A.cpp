#include <bits/stdc++.h>
using namespace std;

int a[100000];
 
void solve(){
    long long n, d; cin >> n >> d;
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long j = 0;
    long long ans = 0;
    for (long long i = 0; i < n; i++) {
        while (a[i] - a[j] > d) j++;
        ans += (i - j)*(i-j-1)/2;
    }
    cout << ans;
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    solve();
}