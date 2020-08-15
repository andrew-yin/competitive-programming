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
        if (n < 4){
            cout << "0\n";
            continue;
        }
        else{
            if (n % 2 == 0){
                cout << ((n-2)/2)*((n-2)/2+1)/2 << "\n";
            }
            else{
                cout << ((n-3)/2)*((n-3)/2+1)/2 << "\n";
            }
        }
    }

    return 0;
}