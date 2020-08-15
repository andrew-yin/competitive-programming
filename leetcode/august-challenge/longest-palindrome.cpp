class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> counts;
        for (char i: s) {
            counts[i]++;
        }
        
        int evens = 0;
        int odds = 0;
        
        for (auto i: counts) {
            if (i.second % 2 == 0) {
                evens++;
            }
            else {
                odds++;
            }
        }

        int ans = 0;
        int usedOdd = 0;
        for (auto i: counts) {
            if (i.second % 2 == 0) {
                ans += i.second;
            }
            else if (!usedOdd) {
                ans += i.second;
                usedOdd = 1;
            }
            else {
                ans += i.second-1;
            }
        }
        return ans;
    }
};
