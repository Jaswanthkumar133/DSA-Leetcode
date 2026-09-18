class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int maxi=0;
        for(int i:st){
            if(st.find(i-1)==st.end()){
                int count=1;
                int it=i;
                while(st.find(it+1)!=st.end()){
                    it+=1;
                    count+=1;
                }
                maxi=max(maxi,count);
            }
        }
        return maxi;
    }
};