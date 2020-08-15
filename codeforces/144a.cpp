#include <bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int s[n];
    for (int i=0; i<n; i++){
        cin >> s[i];
    }

    int mn = 101, mx = 0, mn_idx = -1, mx_idx = -1;
    for (int i=0; i<n; i++){
        if (s[i] <= mn){
            mn = s[i];
            mn_idx = i;
        }
        if (s[i] > mx){
            mx = s[i];
            mx_idx = i;
        }
    }
    
    if (mx_idx < mn_idx){
        cout << mx_idx + (n-1 - mn_idx);
    }
    else{
        cout << mx_idx + (n-1 - mn_idx) - 1;
    }

    return 0;
}