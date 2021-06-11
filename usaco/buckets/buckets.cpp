#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

int B[2];
int L[2]; 
int R[2];

int main() {
    setIO("buckets");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            char k; cin >> k;
            if (k == 'B') {
                B[0] = j; B[1] = i;
            }
            else if (k == 'L') {
                L[0] = j; L[1] = i;
            }
            else if (k == 'R') {
                R[0] = j; R[1] = i;
            }
        }
    }

    if (B[0] == L[0] && R[0] == L[0]) {
        int l, s;
        if (B[1] > L[1]) {
            l = B[1];
            s = L[1]; 
        }
        else {
            l = L[1];
            s = B[1];
        }
        if (R[1] > s && R[1] < l) {
            cout << l - s + 1 << "\n";
        }
        else {
            cout << l - s - 1 << "\n";
        }
    }
    else if (B[1] == L[1] && R[1] == L[1]) {
        int l, s;
        if (B[0] > L[0]) {
            l = B[0];
            s = L[0]; 
        }
        else {
            l = L[0];
            s = B[0];
        }
        if (R[0] > s && R[0] < l) {
            cout << l - s + 1 << "\n";
        }
        else {
            cout << l - s - 1 << "\n";
        }
    }
    else {
        cout << abs(B[1] - L[1]) + abs(B[0] - L[0]) - 1 << "\n";
    }

    return 0;
}