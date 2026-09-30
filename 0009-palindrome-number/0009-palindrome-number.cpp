class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int temp=x;
        int ans=0;
        while(x!=0){
            int ls=x%10;
            if(ans>INT_MAX/10 || ans<INT_MIN/10){
                return false;
            }
            ans=ans*10+ls;
            x/=10;
        }
        if(ans==temp){
            return true;
        }
        return false;
    }
};