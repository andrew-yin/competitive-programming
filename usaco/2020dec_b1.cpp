#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n[7];
    for (int i = 0; i < 7; i++) {
        cin >> n[i];
    }
    sort(n, n+7);
    if (n[0] + n[1] == n[2]) {
        cout << n[0] << " " << n[1] << " " << n[3];
    }
    else {
        cout << n[0] << " " << n[1] << " " << n[2];
    }

    return 0;
}