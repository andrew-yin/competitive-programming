// Author: Andrew Yin
// Date: Summer 2021

#include <bits/stdc++.h>
using namespace std;

int n;
int w[100];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i = 0; i < 2*n; i++) {
        cin >> w[i];
    }
    sort(w, w+(2*n));

    int ans = INT_MAX;
    for (int i = 0; i < 2*n-1; i++) {
        for (int j = i+1; j < 2*n; j++) {
            vector<int> pairs; 
            for (int k = 0; k < 2*n; k++) {
                if (k != i && k != j) {
                    pairs.push_back(w[k]);
                }
            }

            int cost = 0;
            for (int i = 0; i <= 2*n-4; i += 2) {
                cost += pairs[i+1] - pairs[i]; 
            }
            ans = min(ans, cost);
        }
    }

    cout << ans;

    return 0;
}
