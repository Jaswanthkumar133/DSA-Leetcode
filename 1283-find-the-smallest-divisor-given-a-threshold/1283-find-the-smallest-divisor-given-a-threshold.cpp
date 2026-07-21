class Solution {
public:
    int helper(vector<int>nums,int mid){
        int count=0;
        for(int i:nums){
            count+=(i+mid-1)/mid;
        }
        return count;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int temp=helper(nums,mid);
            if(temp<=threshold){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};