// Last updated: 9/15/2025, 9:13:08 PM
class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0; 
        string ans = "";

        for (char c : s) {
            if (c == '(') {
                if (count > 0) ans.push_back(c); 
                count++;
            } else {
                count--;
                if (count > 0) ans.push_back(c); 
            }
        }
        return ans;
    }
};
