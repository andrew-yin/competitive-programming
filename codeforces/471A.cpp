#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int count[10] = {0};
    for (int i = 0; i < 6; i++) {
        int j; cin >> j;
        count[j]++;
    }
    for (int i = 1; i <= 9; i++) {
        if (count[i] == 4) {
            int other1 = -1; int other2 = -1;
            for (int j = 1; j <= 9; j++) {
                if (j != i && count[j] > 0) {
                    if (count[j] == 2) other1 = other2 = j;
                    else if (other1 == -1) other1 = j;
                    else other2 = j;
                }
            }
            if (other1 == other2) {
                cout << "Elephant";
            }
            else {
                cout << "Bear";
            }
            return;
        }
        else if (count[i] == 5) {
            cout << "Bear";
            return;
        }
        else if (count[i] == 6) {
            cout << "Elephant";
            return;
        }
    }
    cout << "Alien";
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    solve();
}