class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int oddCount = 0;
        for (int i: arr) {
            if (i % 2 == 1) {
                oddCount++;
                if (oddCount == 3) {
                    return true;
                }
            }
            else {
                oddCount = 0;
            }
        }
        
        return false;
    }
};
