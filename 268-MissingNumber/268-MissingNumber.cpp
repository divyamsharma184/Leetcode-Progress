// Last updated: 9/3/2025, 9:06:00 AM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n + 1) * n / 2;
        int j =0;
        for(int i=0;i<n;i++){
            j += nums[i];
        }
        return sum-j;
    }
};