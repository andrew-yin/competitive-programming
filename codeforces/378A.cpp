#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    
    int a_win = 0;
    int draw = 0;
    int b_win = 0;

    for (int i=1; i<=6; i++){
        if (abs(a-i) == abs(b-i)){
            draw++;
        }
        else if (abs(a-i) > abs(b-i)){
            b_win++;
        }
        else{
            a_win++;
        }
    }
    cout << a_win << " " << draw << " " << b_win;
}

int main() {
    solve();
	return 0;
}
