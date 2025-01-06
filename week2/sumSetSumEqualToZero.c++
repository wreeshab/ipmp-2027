class Solution {
  public:
    bool subArrayExists(vector<int>& arr) {
        set<int> st;
        int n = arr.size();
        int currentSum = 0;
        for(int i =0; i<n ;i++){
            
            
            currentSum += arr[i];
            if(st.find((currentSum)) != st.end() || currentSum == 0){
                return true;
            }
            st.insert(currentSum);
        }
        return false;
    }
};
