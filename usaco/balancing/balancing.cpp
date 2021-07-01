#include <bits/stdc++.h>
using namespace std;

int N, B;
set<int> X;
set<int> Y;

struct Cow {
    int x, y;
};

Cow cows[100];

void setIO(string s) {
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

int main() {
    setIO("balancing");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> N >> B;
    for (int i = 0; i < N; i++) {
        int x, y; cin >> x >> y;
        Cow cow; cow.x = x; cow.y = y;
        cows[i] = cow;
        X.insert(x-1); Y.insert(y-1);
    }
    
    int ans = INT_MAX;
    for (int a : X) {
        for (int b : Y) {
            int ul = 0, ur = 0, ll = 0, lr = 0;
            for (int i = 0; i < N; i++) {
                Cow cow = cows[i];
                if (cow.x < a) {
                    if (cow.y < b) {
                        ll++;
                    }
                    else {
                        ul++;
                    }
                }
                else {
                    if (cow.y < b) {
                        lr++;
                    }
                    else {
                        ur++;
                    }
                }
            }
            int M = max({ul, ur, ll, lr});
            ans = min(ans, M);
        }
    }
    cout << ans;

    return 0;
}