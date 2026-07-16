class Solution {
public:
    int gd(int a,int b){
        while(a>0 && b>0){
            if(a>b){
                a=a%b;
            }else{
                b=b%a;
            }
        }
        if(a==0){
            return b;
        }
        return a;
    }
    long long gcdSum(vector<int>& nums) {
        int maxi=nums[0];
        vector<int>prefixGcd(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi=nums[i];
            }
            prefixGcd[i]=gd(maxi,nums[i]);
        }
        sort(prefixGcd.begin(),prefixGcd.end());
        int low=0;
        int high=prefixGcd.size()-1;
        long long sum=0;
        while(low<high){
            sum+=gd(prefixGcd[low],prefixGcd[high]);
            low++;
            high--;
        }
        return sum;
    }
};