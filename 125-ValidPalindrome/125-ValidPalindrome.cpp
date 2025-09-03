// Last updated: 9/3/2025, 9:06:06 AM
class Solution {
public:
   bool isPalindrome(string s) {
    int n = s.length();
    int l = 0;
    int r = n - 1;

   while (l <= r) {
       
        while (l < r && !isalnum(s[l])) 
        l++;
        while (l < r && !isalnum(s[r])) 
        r--;

        
        if (tolower(s[l]) != tolower(s[r])) {
            return false;
        }

        l++;
        r--;
    }

    return true;
}

};
