class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum = 0;
        int maxiSum = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                sum += nums[i];
                
            } else if (nums[i - 1] < nums[i]) {
                sum += nums[i];
               
            } else if (nums[i - 1] >= nums[i]) {
                sum = nums[i];
            }
            maxiSum = max(maxiSum, sum);

        }
        return maxiSum;
    }
};
