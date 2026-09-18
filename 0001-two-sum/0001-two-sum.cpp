class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            int rem=target-nums[i];
            if(mpp.find(rem)!=mpp.end()){
                return {mpp[rem],i};
            }
            if(mpp.find(nums[i])==mpp.end()){
                mpp[nums[i]]=i;
            }
        }
        return {-1,-1};
    }
};