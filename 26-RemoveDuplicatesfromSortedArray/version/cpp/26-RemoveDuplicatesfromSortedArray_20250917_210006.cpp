// Last updated: 9/17/2025, 9:00:06 PM
class Solution {
public:
    int removeDuplicates(vector<int>& nums){
    int i=0;
    int j=1;
    int k = nums.size();
    for(j=1;j<k;j++){
        if(nums[i]!=nums[j]){
            nums[i+1]=nums[j];
            i++;
        }
    }
    return i+1;
    }
};
    
