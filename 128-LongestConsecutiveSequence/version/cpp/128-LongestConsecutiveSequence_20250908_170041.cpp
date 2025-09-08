// Last updated: 9/8/2025, 5:00:41 PM
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        sort(nums.begin(), nums.end());

        int longest = 1;
        int count = 1;
        int n = nums.size();

        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                continue;
            } 
            else if (nums[i] == nums[i - 1] + 1) {
                count++;
            } 
            else {
                count = 1; 
            }
            longest = max(longest, count);
        }
        return longest;
    }
};