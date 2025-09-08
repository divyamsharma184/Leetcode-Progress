// Last updated: 9/8/2025, 9:34:46 PM
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