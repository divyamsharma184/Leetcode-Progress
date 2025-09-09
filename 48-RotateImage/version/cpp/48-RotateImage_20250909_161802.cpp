// Last updated: 9/9/2025, 4:18:02 PM
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // since every row shiftinf to coulumn i have to transpose
        

        int n = matrix.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};