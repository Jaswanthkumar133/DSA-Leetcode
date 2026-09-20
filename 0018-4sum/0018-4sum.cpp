class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>res;
        if(nums.size()<4){
            return res;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-3;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }else{
                for(int j=i+1;j<nums.size()-2;j++){
                    if(j>i+1 && nums[j]==nums[j-1]){
                        continue;
                    }else{
                        int k=j+1;
                        int l=nums.size()-1;
                        long long sum=0;
                        while(k<l){
                            sum=1LL*nums[i]+nums[j]+nums[k]+nums[l];
                            if(sum==target){
                                res.push_back({nums[i],nums[j],nums[k],nums[l]});
                                k++;
                                l--;
                                while(k<l &&  nums[k]==nums[k-1]){
                                    k++;
                                }
                                while(k<l && nums[l]==nums[l+1]){
                                    l--;
                                }
                            }else if(sum<target){
                                k++;
                            }else{
                                l--;
                            }
                        }
                    }
                }
            }
        }
        return res;
    }
};