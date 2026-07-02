class Solution {
public:
     int countdays(vector<int>&weights,int maxi){
        int days=1;
        long long sum=0;
        for(int i:weights){
            if(sum+i<=maxi){
                sum+=i;
            }else{
                days++;
                sum=i;
            }
        }
        return days;
     }
    int shipWithinDays(vector<int>& weights, int days) {
        long long low=*max_element(weights.begin(),weights.end());
        long long high=0;
        for(int i:weights){
            high+=i;
        }
        int ans=high;
        while(low<=high){
            long long mid=low+(high-low)/2;
            int temp=countdays(weights,mid);
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