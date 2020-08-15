class Solution {
public:
    bool isPowerOfFour(int num) {
        if (num > 0 && (num && !(num & (num - 1)))) {
            int count = 0;
            while (num > 1) {
                num = num >> 1;
                count++;
            }

            return (count % 2 == 0) ? true : false;
        }
        else { 
            return false;
        }
    }
};
