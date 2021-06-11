// Author: Andrew Yin
// Date: Summer 2021

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        s += s;
        string odd, even; // one is in the ___ spots
        for (int i = 0; i < s.size(); i++) {
            if (i % 2) {
                odd += '1'; even += '0';
            }
            else {
                odd += '0'; even += '1'; 
            }
        }

        int odd_cost = 0; int even_cost = 0; int ans = INT_MAX;
        for (int i = 0; i < s.size(); i++) {
            if (odd[i] != s[i]) odd_cost++;
            if (even[i] != s[i]) even_cost++;
            if (i >= n) {
                if (s[i-n] != odd[i-n]) odd_cost--;
                if (s[i-n] != even[i-n]) even_cost--;
            } 
            if (i >= n - 1) ans = min({odd_cost, even_cost, ans});
        } 
        return ans;
    }
};
