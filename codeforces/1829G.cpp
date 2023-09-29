#include <bits/stdc++.h>
using namespace std;

#define LL long long

pair<int, int> get_pos(int n) {
    int r = 1;
    while (r*(r+1)/2 < n) {
        r++;
    }
    int c = n - (r-1)*r/2;
    return pair<int, int>(r, c);
}

LL get_num(LL row, LL col) {
    return row*(row-1)/2 + col; 
}

LL sos(LL n) {
    return n*(n+1)*(2*n+1)/6;
}

void solve() {
    int n; cin >> n;
    
    pair<int, int> rc = get_pos(n);
    int row = rc.first;
    int col = rc.second;

    LL ans = 0;
    int row_min = col;
    int row_max = col;
    while (row > 0) {
        LL min_num = get_num(row, row_min);
        LL max_num = get_num(row, row_max);
        ans += sos(max_num) - sos(min_num-1);
        
        if (row_min - 1 > 0) {
            row_min--;
        }
        else {
            row_min = 1;
        }

        if (row_max > row-1) {
            row_max = row-1;
        }
        row--;
    }
    cout << ans << "\n";
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
