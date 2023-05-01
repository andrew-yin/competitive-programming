#include <bits/stdc++.h>
using namespace std;

void solve() {
    string x;
    cin >> x;

    for (int i=0; i<x.length(); i++){
        int j = ((int)x[i]) - 48;   
        if (i == 0 && j == 9){
            cout << j;
        }
        else if (j>= 5){
            cout << 9-j;
        }
        else {
            cout << j;
        }
    }
    return;
}

int main() {
    solve();
	return 0;
}
