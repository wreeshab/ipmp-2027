class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int product = 1;
        int i =0;
        int j =0;
        int n = nums.size();
        int count = 0;
        if(k <= 0) return 0;
        for( j =0;j<n;j++){
            product *= nums[j];

            while(product >= k && i <= j){
                product /= nums[i];
                i++;
            }

            count += j - i +1;
        }
        return count;
    }
};
