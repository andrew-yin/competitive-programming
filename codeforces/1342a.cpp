#include <bits/stdc++.h>

using namespace std;



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    
    while(t--){
        unsigned long long x, y, a, b;
        cin >> x >> y >> a >> b;
        if (2*a < b){
            cout << (x+y)*a << "\n";
        }
        else{
            if (x > y){
                cout << y*b + (x-y)*a << "\n";
            }
            else{
                cout << x*b + (y-x)*a << "\n";
            }
        }
    }

    return 0;
}