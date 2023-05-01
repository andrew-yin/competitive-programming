#include <bits/stdc++.h>

using namespace std;



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int row = 0;
    int col = 0;

    int e = 0;
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            cin >> e;
            if (e == 1){
                row = i;
                col = j;
                break;
            }
        }
    }

    int ans = 0;
    if (row < 2){
        ans += 2-row;
    }
    else{
        ans += row-2;
    }
    if (col < 2){
        ans += 2-col;
    }
    else{
        ans += col-2;
    }

    cout << ans;
    return 0;
}