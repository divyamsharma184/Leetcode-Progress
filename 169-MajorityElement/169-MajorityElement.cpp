// Last updated: 9/3/2025, 9:06:02 AM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
    
       int count = 0 ;
       int el ; 
       for (int i = 0; i<nums.size();i++){
        if(count==0){
            count = 1;
            el = nums[i] ; 
        }
        else if (nums [i]==el){
            count ++;
        }
        else {
            count --; 
        }
       }

return el ;
}
};