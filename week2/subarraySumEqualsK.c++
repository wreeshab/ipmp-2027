class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int , int> mapping;
        int n = nums.size();
        int prefixSum = 0;
        int result = 0;
        mapping[0] = 1;
        for(int num:nums){
            prefixSum += num;
            if(mapping.find(prefixSum - k) != mapping.end()){
                result += mapping[prefixSum - k];
            }

            mapping[prefixSum]++;
        }
        return result;
    }
};
