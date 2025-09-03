// Last updated: 9/3/2025, 9:05:58 AM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count =0;
        int maximum = 0;
        int n = nums.size();

        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count ++;
                maximum = max(maximum,count);
            }
            else{
                count = 0;
            }

            }
            return maximum;
        }
    
};