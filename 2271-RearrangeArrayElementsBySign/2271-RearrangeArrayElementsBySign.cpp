// Last updated: 9/3/2025, 9:05:53 AM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int positive = 0;
        int negative = 1;
        int n = nums.size();
        vector<int> ans(n,0);
        for(int i = 0 ; i<nums.size(); i++){
            if(nums[i]<0){
                ans[negative]=nums[i];
                negative = negative + 2;
            }
            else{
                ans[positive]=nums[i];
                positive = positive + 2;
            }
        }
        return ans ; 
    }
};