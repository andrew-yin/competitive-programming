#include <bits/stdc++.h>

using namespace std;



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    int t;
    cin >> t;
    
    while(t--){
        int n, q, c;
        string s;
        cin >> n >> q >> s;
        unordered_map<char, int> a;
        for (int i=0; i<n; i++){
            a[s[i]]++;
        }
        
        for (int i=0; i<q; i++){
            int c;
            cin >> c;

            int out = 0;
            for (auto &m: a){
                if (m.second > c){
                    out += m.second-c;
                }
            }
            cout << out << "\n";
        }
    }
    return 0;
}