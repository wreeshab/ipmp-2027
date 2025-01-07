class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        vector<int> temp(k);
        int n = nums.size();
        for(int i =0;i<k;i++){
            temp[i] = nums[n-k+i];
        }
        for(int i =n-1; i>=k; i--){
            nums[i] = nums[i-k];
        }
        for(int i = 0;i<k;i++){
            nums[i] = temp[i];
        }
    }
};
