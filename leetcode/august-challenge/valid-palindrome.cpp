class Solution {
public:
    bool isPalindrome(string s) {
        string s2 = "";
        for (char i: s) {
            int n = (int) i;
            if (n >= 65 && n <= 90) {
                s2.push_back((char) (n + 32));
            }
            else if ((n >= 48 && n <= 57) || (n >= 97 && n <= 122)) {
                s2.push_back((char) n);
            }
        }
        return isReverse(s2);
    }

    bool isReverse(string s) {
        if (s == ""){
            return true;
        }

        for (int i=0; i<=(s.size()-1)/2; i++) {
            if (s[i] != s[s.size()-1-i]) {
                return false;
            }
        }
        return true;
    }
};
