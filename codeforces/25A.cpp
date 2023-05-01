#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    for (int i=1; i<n-1; i++){
        if (a[i] % 2 != a[i-1] % 2){
            if (a[i] % 2 != a[i+1] % 2){
                cout << i+1;
                break;
            }
            else{
                cout << i;
                break;
            }
        }
        else if (a[i] % 2 != a[i+1] % 2){
            if (a[i] % 2 != a[i-1] % 2){
                cout << i+1;
                break;
            }
            else{
                cout << i+2;
                break;
            }
        }
    }

    return 0;
}
