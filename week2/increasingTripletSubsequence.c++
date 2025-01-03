class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int low = INT_MAX;
        int mid = INT_MAX;
        for(int i : nums){
            if(i > mid ){
                return true;
            }else if(i > low && i<mid) {
                mid = i;
            }else if(i<low) {
                low = i;
            }
        }
        return false;
    }
};
