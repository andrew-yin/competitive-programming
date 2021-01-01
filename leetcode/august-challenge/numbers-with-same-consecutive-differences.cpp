class Solution {
public:
    vector<int> numsSameConsecDiff(int N, int K) {
        vector<int> ans;
        if (N == 1) {
            return vector<int>{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        }
        for (int i=1; i<=9; i++) {
            recurse(i*pow(10, N-1), ans, N-1, K, i);
        }
        return ans;
    }
    
    void recurse(int curNum, vector<int>& ans, int n, int k, int prevDig) {
        if (n == 0) {
            ans.push_back(curNum);
            return;
        }
        if (prevDig+k <= 9) {
            recurse(curNum + (prevDig+k)*pow(10,n-1), ans, n-1, k, prevDig+k);
        }
        if (prevDig-k >= 0 && k != 0) {
            recurse(curNum + (prevDig-k)*pow(10,n-1), ans, n-1, k, prevDig-k);
        }
    }
};
