#include <bits/stdc++.h>
using namespace std;

#define LL long long

const int N = 1E5+1;
int n;
int p[N];
int s[N];

void solve() {
    // bfs on nodes, sum up the values
    // given node n parent p, min_sum[p] defined
    // if min_sum[n] defined as well, value[n] = min_sum[n] - min_sum[p]
    // if min_sum[n] = -1, then we are on even layer, set to zero, min_sum[n] = min_sum[p]
    cin >> n;
    vector<vector<int>> children(n+1);
    for (int i = 2; i <= n; i++) {
        cin >> p[i];
        children[p[i]].push_back(i);
    }
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
    }
    
    
    LL ans = s[1];
    queue<int> q;
    for (int i : children[1]) {
        q.push(i);
    }

    while (!q.empty()) {
        int i = q.front(); 
        q.pop();

        int parent = p[i];
        if (s[i] == -1) {
            if (children[i].size() == 0) {
                // set to 0
                s[i] = s[parent];
            }
            else {
                int set = INT_MAX;
                for (int j : children[i]) {
                    set = min(set, s[j]);
                }
                if (set < s[parent]) {
                    cout << "-1\n";
                    return;
                }
                s[i] = set;
            }
        }
        else if (s[parent] > s[i]) {
            cout << "-1\n";
            return;
        }
        ans += s[i] - s[parent];
        
        for (int j : children[i]) {
            q.push(j);
        }
    }

    cout << ans << "\n";    
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}
