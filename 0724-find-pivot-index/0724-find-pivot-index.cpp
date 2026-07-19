class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left=0;
        int right=0;
        vector<int>leftS(nums.size(),0);
        vector<int>rightS(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            left+=nums[i];
            leftS[i]=left;
            right+=nums[nums.size()-i-1];
            rightS[nums.size()-i-1]=right;
        }
        for(int i=0;i<nums.size();i++){
            if((leftS[i]-rightS[i])==0){
                return i;
            }
        }
        return -1;
    }
};