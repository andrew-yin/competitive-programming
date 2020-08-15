class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end(), greater<int>());
        for (int i: citations) {
            cout << i << " ";
        }
        
        for (int i=citations.size(); i>=1; i--) {
            if (citations[i-1] >= i) {
                return i;
            }
        }
        return 0;
    }
};
