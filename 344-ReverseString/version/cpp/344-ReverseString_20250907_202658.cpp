// Last updated: 9/7/2025, 8:26:58 PM
class Solution {
public:
   void reverseString(vector<char>& s) {
    int start = 0;
    int end = s.size() - 1;

    while (start < end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }
}
};
