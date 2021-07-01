#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumRemovals(string s, string p, vector<int>& removable) {
        string org = s;
        int l = 0, r = removable.size() - 1;
        while (l <= r) {
            int m = (l + r)/2;
            for (int i = 0; i <= m; i++) {
                s[removable[i]] = '.';
            }
            if (is_subsequence(s, p)) {
                l = m + 1;
            }
            else {
                for (int i = 0; i <= m; i++) {
                    s[removable[i]] = org[removable[i]];
                }
                r = m - 1;
            }
        }
        return r+1;
    }

    bool is_subsequence(string s, string p) {
        int i = 0;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == p[i]) {
                i++;
                if (i == p.size()) return true;
            }
        } 
        return false;
    }
};