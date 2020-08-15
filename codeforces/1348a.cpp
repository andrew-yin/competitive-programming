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
        int y = pow(2,n)+pow(2,n/2)-2;
        int x = pow(2,n+1)-2-y;
        cout << abs(y-x) << "\n";
    }

    return 0;
}