class Solution {
public:
    int mySqrt(int x) {
        int ans=-1;
        if(x<2){
            return x;
        }
        int low=1;
        int high=x/2;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(1LL*mid*mid<=x){
                ans=mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return ans;
    }
};