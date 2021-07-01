// Author: Andrew Yin
// Date: Summer 2021

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string S; cin >> S;
    unordered_map<char, int> count;
    for (char i : S) {
        count[i]++;
    }

    int n = S.size(); 
    int odd_count_count = 0;
    char odd = ' ';
    for (auto i : count) {
        if (i.second % 2) {
            odd_count_count++;
            odd = i.first;
            count.erase(odd);
        }
    }
    
    if (odd_count_count > 1) {
        cout << "NO SOLUTION";
        return 0;
    }
        
    if (n % 2 == 0) {
        if (odd_count_count == 0) {
            string ans(n, '.');
            int l = 0, r = n-1;
            for (auto i = count.begin(); i != count.end(); i++) {
                for (int k = 0; k < i->second/2; k++) {
                    ans[l] = i->first;
                    ans[r] = i->first;
                    l++;
                    r--;
                }
            }
            cout << ans;
        }
        else {
            cout << "NO SOLUTION";

        }
    }
    else {
        if (odd_count_count == 1) {
            string ans(n,odd);
            int l = 0, r = n-1;
            for (auto i = count.begin(); i != count.end(); i++) {
                for (int k = 0; k < i->second/2; k++) {
                    ans[l] = i->first;
                    ans[r] = i->first;
                    l++;
                    r--;
                }
            }
            cout << ans;
        }
    }

    return 0;
}
