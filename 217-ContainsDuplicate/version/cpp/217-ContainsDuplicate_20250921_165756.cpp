// Last updated: 9/21/2025, 4:57:56 PM
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(int num : nums) {
            if(seen.count(num)) return true;
            seen.insert(num);
        }
        return false;
    }
};

