class Solution {
public:
    long long calculateScore(string s) {

        int n = s.size();
        long long totalScore= 0;
        unordered_map<char, stack<int>> mpp;
        for(int i =0;i<n;i++){
            char mirrorChar = 'z' - (s[i] -'a');
            if(!mpp[mirrorChar].empty()){
                int nearestIndex = mpp[mirrorChar].top();
                mpp[mirrorChar].pop();
                totalScore += (i - nearestIndex);
            }else{
                mpp[s[i]].push(i);
            }
        }
        return totalScore;
    }
};
