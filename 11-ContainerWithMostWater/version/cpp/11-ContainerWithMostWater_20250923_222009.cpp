// Last updated: 9/23/2025, 10:20:09 PM
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0, j = n - 1;
        int maxwater = 0;

        while (i < j) {
            int h = min(height[i], height[j]);
            int width = j - i;
            int area = h * width;
            maxwater = max(maxwater, area);

            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }
        return maxwater;
    }
};
