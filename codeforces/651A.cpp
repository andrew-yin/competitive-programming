#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    bool chargingA = a <= b;
    int ans = 0;
    if (a == 1 && b == 1){
        cout << 0;
        return;
    }
    while (a > 0 && b > 0){
        if (chargingA){
            a++;
            b -= 2;
        }
        else {
            a -= 2;
            b++;
        }
        if (!(chargingA) && a <= 2 && a < b){
            chargingA = true;
        }
        if (chargingA && b <= 2 && b < a){
            chargingA = false;
        }
        ans++;
    }
    cout << ans;
    return;
}

int main() {
    solve();
	return 0;
}
