class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int maxiAnswer = 1;
        for(int i =0;i<n;i++){
            long long  gcdValue = nums[i];
            long long lcmValue = nums[i];
            long long product = nums[i];
            int maxiii =100000000000;
            for(int j=i+1;j<n;j++){
                if(product > maxiii) break;
                product *= nums[j];
                lcmValue = lcm(lcmValue, nums[j]);
                gcdValue = gcd(gcdValue, nums[j]);
                if(product == (lcmValue * gcdValue)){
                    maxiAnswer = max(maxiAnswer , (j-i+1));
                }
            }
        }
        return maxiAnswer;
    }
};
