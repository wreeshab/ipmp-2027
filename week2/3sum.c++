class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i =0;
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int j = i+1;
            int k = n-1;
            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum <0){
                    j++;
                }else if(sum >0){
                    k--;
                }else{
                    vector<int> ele = {nums[i],nums[j],nums[k]};
                    ans.push_back(ele);
                    while(k>j && nums[j] == nums[j+1]) j++;
                    while(k>j && nums[k] == nums[k-1]) k--;
                     j++;
                    k--;
                }
            }
        }
        return ans;
    }
};
