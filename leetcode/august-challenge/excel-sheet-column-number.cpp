class Solution {
public:
    int titleToNumber(string s) {
        unsigned long long int ans = 0, base = 1;
        for (int i=s.size()-1; i>=0; i--) {
            ans += ((int) s[i] - 64)*base;
            base *= 26;
        }
        return ans;
    }
};
