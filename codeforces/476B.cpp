#include <bits/stdc++.h>
using namespace std;

int nCk(int n, int k) {
    int nf = 1;
    int kf = 1;
    int nkf = 1;
    for (int i = 1; i <= n; i++) {
        nf *= i;
        if (i <= k) {
            kf *= i;
        }
        if (i <= (n - k)) {
            nkf *= i;
        }
    }
    return nf / (kf * nkf);
}

void solve() {
    string o, r;
    cin >> o >> r;

    int opos = 0, rpos = 0, q = 0;
    for (int i = 0; i < o.size(); i++) {
        if (o[i] == '+') {
            opos++;
        }
        else {
            opos--;
        }

        if (r[i] == '+') {
            rpos++;
        }
        else if (r[i] == '-') {
            rpos--;
        }
        else {
            q++;
        }
    }

    int diff = abs(opos - rpos);
    if (diff > q) {
        cout << "0.0";
        return;
    }

    if (diff % 2 == q % 2) {
        cout << setprecision(std::numeric_limits<double>::digits10 + 1) << nCk(q, (q - diff) / 2) * pow(0.50000000000, q);
    }
    else {
        cout << "0.0";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);


    solve();

    return 0;
}