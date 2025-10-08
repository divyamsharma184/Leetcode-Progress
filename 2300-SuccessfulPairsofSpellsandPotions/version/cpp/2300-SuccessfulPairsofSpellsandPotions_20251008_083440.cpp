// Last updated: 10/8/2025, 8:34:40 AM
class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> pairs;
        sort(potions.begin(), potions.end()); 
        int m = potions.size();

        for (int spell : spells) {
            long long needed = (success + spell - 1) / spell; 
            auto it = lower_bound(potions.begin(), potions.end(), needed);
            int count = potions.end() - it;  
            pairs.push_back(count);
        }

        return pairs;
    }
};
