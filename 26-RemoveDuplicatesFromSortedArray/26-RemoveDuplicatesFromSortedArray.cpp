// Last updated: 9/3/2025, 9:06:12 AM
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
    
