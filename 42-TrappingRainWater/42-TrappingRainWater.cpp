// Last updated: 9/3/2025, 9:06:10 AM
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l = 0, r = n - 1;
        int lmax = 0, rmax = 0, total = 0;

        while (l <= r) {
            if (height[l] <= height[r]) {
                if (height[l] >= lmax) {
                    lmax = height[l];
                } else {
                    total += lmax - height[l];
                }
                l++;
            } else {
                if (height[r] >= rmax) {
                    rmax = height[r];
                } else {
                    total += rmax - height[r];
                }
                r--;
            }
        }
        return total;
    }
};
