#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, k;
    string s;
    cin >> n >> k >> s;
    sort(s.begin(), s.end());

    if (s[0] != s[k-1]){
        cout << s[k-1] << "\n";
    }
    else{
        if (s[k] == s[n-1]){
            int tail = (n-k)%k != 0 ? (n-k)/k + 1 : (n-k)/k;

            string end(tail, s[k]);
            cout << s.substr(0,1) + end << "\n";
        }
        else{
            cout << s.substr(k-1) << "\n";
        }
    }

}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}