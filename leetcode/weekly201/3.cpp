class Solution {
public:
    string makeGood(string s) {
        string ans = "";
        vector<char> word;
        word.push_back(s[0]);
        
        for (int i=1; i<s.size(); i++) {
            if (!word.empty()) {
                int x = (int) word.back();
                int y = (int) s[i];
                
                if (abs(x-y) == 32) {
                    word.pop_back();
                }
                else {
                    word.push_back(s[i]);
                }
            }
            else {
                word.push_back(s[i]);
            }
        }
        
        for (char i: word) {
            ans.push_back(i);
        }

        return ans;
    }
};
