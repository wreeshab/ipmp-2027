class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)return false;
        long long rev = 0;
        long long temp = x;

        while(temp != 0){
            int last = temp % 10;
            rev = (rev*10) + last;
            temp /= 10;
        }
        if(rev == x){
            return true;
        }
        return false;
    }
};