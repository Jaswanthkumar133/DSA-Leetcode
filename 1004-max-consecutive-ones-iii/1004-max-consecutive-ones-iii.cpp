class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxi=0;
        int left=0;
        int zeros=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zeros++;
            }
            while(zeros>k && left<=i){
                if(nums[left]==0){
                    zeros--;
                }
                left++;
            }
            maxi=max(maxi,i-left+1);
        }
        return maxi;
    }
};