class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int ele=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele){
                count++;
            }else if(count==0){
                count=1;
                ele=nums[i];
            }else{
                count--;
            }
        }
        count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele){
                count++;
            }
        }
        return (count>=nums.size()/2)?ele:-1;
    }
};