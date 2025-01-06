
class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n = arr.size();
        int grandProduct = 1;
        vector<int> res;
        // for (int i : arr){
        //     grandProduct *= i;
        // }
        
        // for(int i =0;i< n;i++){
        //     if(arr[i] != 0){
        //         res.push_back(grandProduct / arr[i]);
        //     }else{
        //         res.push_back(grandProduct);
        //     }
        // }
        // return res;
        
        int prefixProduct = 1;
        int suffixProduct = 1;
        vector<int> prefix(n), suffix(n);
        for(int i =0; i< n ;i++){
            prefix[i] = prefixProduct;
            prefixProduct *= arr[i];
            
            int j = n-1 -i;
            suffix[j] = suffixProduct;
            suffixProduct *= arr[j];
        }
        for(int i =0;i<n;i++){
            prefix[i] *= suffix[i];
        }
        return prefix;
    }
};

