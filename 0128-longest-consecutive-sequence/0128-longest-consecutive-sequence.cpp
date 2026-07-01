class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int maxi=0;
        for(auto &it:st){
            if(st.find(it-1)==st.end()){
                int temp=it;
                int count=1;
                while(st.find(temp+1)!=st.end()){
                    count++;
                    temp+=1;
                }
                maxi=max(maxi,count);
            }
        }
        return maxi;
    }
};