class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        int maxiIndex = -1;
        int maxiSum = -1;
        for (int i = 0; i < m; i++) {

            sort(mat[i].begin(), mat[i].end());

            int low = 0, high = n - 1, firstOneIndex = n;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (mat[i][mid] == 1) {
                    firstOneIndex = mid;
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            int count = n - firstOneIndex;
            if (count > maxiSum) {
                maxiSum = count;
                maxiIndex = i;
            }
        }

        return {maxiIndex, maxiSum};
    }
};
