#include <bits/stdc++.h>

using namespace std;

void solve(unordered_set<int> &a, const int &n, const int &k){
    if (a.size() > k){
        cout << "-1\n";
        return;
    }
    else{
        vector<int> missing;
        int count = 0;
        int e = 1;
        while (count < k-a.size() && e <= n){
            if (a.count(e) == 0){
                missing.push_back(e);
                count++;
            }
            e++;
        }
        cout << k*n << "\n";
        for (int i=0; i<n; i++){
            for (int j: missing){
                cout << j << " ";
            }
            for (int j: a){
                cout << j << " ";
            }
        }
        cout << "\n";
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    
    while(t--){
        int n, k;
        cin >> n >> k;
        unordered_set<int> a;
        for (int i=0; i<n; i++){
            int j;
            cin >> j;
            a.insert(j);
        }

        solve(a, n, k);
    }

    return 0;
}