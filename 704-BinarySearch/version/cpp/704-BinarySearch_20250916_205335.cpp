// Last updated: 9/16/2025, 8:53:35 PM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;

        while(low <= high){
            int mid = (low+high) / 2;
            if(nums[mid] == target) return mid;

            else if(target > nums[mid]){
                low = mid+1;
            }

            else {
                high = mid-1;
            }
        }
        return -1;
        

    }
};