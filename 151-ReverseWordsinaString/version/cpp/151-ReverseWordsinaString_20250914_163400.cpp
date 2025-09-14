// Last updated: 9/14/2025, 4:34:00 PM
class Solution {
public:
    string reverseWords(string s) {
        int left = 0;
        int right = s.length() - 1;

        
        while (left <= right && s[left] == ' ') left++;
        
        while (right >= left && s[right] == ' ') right--;

        string temp = "", ans = "";
        while (left <= right) {
            char ch = s[left];
            if (ch != ' ') {
                temp += ch;   
            } else {
                if (!temp.empty()) { 
                    if (!ans.empty()) ans = temp + " " + ans;
                    else ans = temp;
                    temp = "";
                }
            }
            left++;
        }

        
        if (!temp.empty()) {
            if (!ans.empty()) ans = temp + " " + ans;
            else ans = temp;
        }

        return ans;
    }
};
