// Last updated: 9/27/2025, 12:58:01 AM
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int freq[101] = {0};   

        
        for (int num : nums) {
            freq[num]++;
        }

        
        int maxFreq = 0;
        for (int i = 0; i < 101; i++) {
            maxFreq = max(maxFreq, freq[i]);
        }

        
        int result = 0;
        for (int i = 0; i < 101; i++) {
            if (freq[i] == maxFreq) {
                result += freq[i];
            }
        }

        return result;
    }
};
