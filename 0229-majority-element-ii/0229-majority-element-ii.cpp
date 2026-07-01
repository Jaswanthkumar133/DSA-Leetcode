class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1=0;
        int c2=0;
        int ele1=-1;
        int ele2=-1;
        for(int i:nums){
            if(i==ele1){
                c1++;
            }else if(i==ele2){
                c2++;
            }else if(c1==0){
                ele1=i;
                c1=1;
            }else if(c2==0){
                ele2=i;
                c2=1;
            }else{
                c1--;
                c2--;
            }
        }
        c1=0;
        c2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele1){
                c1++;
            }else if(nums[i]==ele2){
                c2++;
            }
        }
        vector<int>res;
        if(c1>=nums.size()/3+1){
            res.push_back(ele1);
        }
        if(c2>=nums.size()/3+1){
            res.push_back(ele2);
        }
        return res;
    }
};