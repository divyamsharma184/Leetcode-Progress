// Last updated: 9/3/2025, 9:06:15 AM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int a=nums[i];
            int more = target - a;
            if(mpp.find(more)!=mpp.end()){
                return {mpp[more], i}; 
            }
            mpp[a]=i;


        }
        return {};
    }
};