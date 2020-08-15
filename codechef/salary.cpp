#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        int w[n];
        int ans = 0;
        int mini = 10001;
        for (int i=0; i<n; i++){
            cin >> w[i];
            if (w[i] < mini){
                mini = w[i];
            }
        }

        for (int& i: w){
            ans += i-mini;
        }
        cout << ans << "\n";

    }

    return 0;
}