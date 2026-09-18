class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long ans=0;
        int temp=x;
        while(temp){
            int ls=temp%10;
            ans=ans*10+ls;
            temp/=10;
        }
        if(ans==x){
            return true;
        }
        return false;
    }
};