class Solution {
public:
    int helper(vector<int>&weights,int days,int mid){
        int temp=0;
        long long ans=0;
        for(int i:weights){
            if(ans+i>mid){
                temp++;
                ans=i;
            }else{
                ans+=i;
            }
        }
        if(ans!=0){
            temp++;
        }
        return temp;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        long long low=*max_element(weights.begin(),weights.end());
        long long high=accumulate(weights.begin(),weights.end(),0LL);
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            int temp=helper(weights,days,mid);
            if(temp<=days){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};