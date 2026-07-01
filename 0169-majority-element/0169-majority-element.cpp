class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele=-1;
        int count=0;
        for(int i:nums){
            if(i==ele){
                count++;
            }
            else if(count==0){
                ele=i;
                count=1;
            }else{
                count--;
            }
        }
        count=0;
        for(int i:nums){
            if(i==ele){
                count++;
            }
        }
        return (count>nums.size()/2)?ele:-1;
    }
};