// Author: Andrew Yin
// Date: Summer 2021

#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> N;
    if (N == 1) {
        cout << "1";
    }
    else if (N > 1 && N < 4) {
        cout << "NO SOLUTION";
    }
    else {
        string spacer = "";
        int i , j;
        if (N % 2 == 0) {i = 2; j = 1;}
        else {i = 1; j = 2;}

        for (; i <= N; i+=2) {
            cout << spacer << i; 
            spacer = " ";
        }
        for (; j <= N; j+=2) {
            cout << spacer << j; 
            spacer = " "; 
        }
    }
    return 0;
}
