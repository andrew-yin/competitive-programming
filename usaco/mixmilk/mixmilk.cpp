#include <bits/stdc++.h>
using namespace std;

struct Bucket {
    int cur, max;
};

void setIO(string s) {
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

int main() {
    setIO("mixmilk");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    Bucket abc[3];
    cin >> abc[0].max >> abc[0].cur >> abc[1].max >> abc[1].cur >> abc[2].max >> abc[2].cur;

    int j = 0;
    for (int i = 1; i <= 100; i++) {
        int from = abc[j].cur;
        int to_max = abc[(j + 1) % 3].max;
        int to_cur = abc[(j + 1) % 3].cur;

        if (from + to_cur <= to_max) {
            abc[(j + 1) % 3].cur = from + to_cur;
            abc[j].cur = 0;
        }
        else {
            int pour = to_max - to_cur;
            int left = abc[j].cur - pour;
            abc[(j + 1) % 3].cur = to_max;
            abc[j].cur = left;
        }

        j = (j + 1) % 3;
    }

    string space = "";
    for (int i = 0; i <= 2; i++) {
        cout << space << abc[i].cur; 
        space = "\n";
    }

    return 0;
}