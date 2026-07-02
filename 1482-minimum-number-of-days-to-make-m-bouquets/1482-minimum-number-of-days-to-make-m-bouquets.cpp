class Solution {
public:
    int calu(vector<int>&bloom,int m,int k,int l){
        int count=0;
        int boquets=0;
        for(int i=0;i<bloom.size();i++){
            if(bloom[i]<=l){
                count++;
                if(count==k){
                    boquets++;
                    count=0;
                }
            }
            else{
                count=0;
            }
        }
        return boquets;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long res=m*1LL*k;
        if(bloomDay.size()<res){
            return -1;
        }
        int mini=*min_element(bloomDay.begin(),bloomDay.end());
        int mixi=*max_element(bloomDay.begin(),bloomDay.end());
        int low=mini;
        int high=mixi;
        int temp=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int boquets=calu(bloomDay,m,k,mid);
            if(boquets>=m){
                temp=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return temp;
    }
};