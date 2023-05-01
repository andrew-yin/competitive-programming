#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> b;

    int s = 0;
    int i = 1;
    while (s < n){
        s += i;
        if (s < n){
            b.push_back(i);
            i *= 2;
        }
    }
    s -= i;
    b.push_back(n-s);
    sort(b.begin(), b.end());

    cout << b.size()-1 << "\n";
    for (int i=1; i<b.size(); i++){
        cout << b[i]-b[i-1] << " ";
    }
    cout << "\n";
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