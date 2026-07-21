class Solution {
public:
    int helper(vector<int>&nums,int mid){
        long long ans=0;
        int count=1;
        for(int i:nums){
            if(ans+i>mid){
                count++;
                ans=i;
            }else{
                ans+=i;
            }
        }
        return count;
    }
    int splitArray(vector<int>& nums, int k) {
        long long low=*max_element(nums.begin(),nums.end());
        long long high=accumulate(nums.begin(),nums.end(),0LL);
        int ans=-1;
        while(low<=high){
            long long mid=low+(high-low)/2;
            int temp=helper(nums,mid);
            if(temp==k){
                ans=mid;
                high=mid-1;
            }
            else if(temp<k){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};