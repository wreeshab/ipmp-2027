class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        for(int i =0;i<n;i++){
            if(nums[i] == 0){
                int ind = i+1;
                while(ind<n){
                    if(nums[ind] != 0){
                        swap(nums[i],nums[ind]);
                        break;
                    }
                    ind++;
                }
            }
        }
        
    }
};
