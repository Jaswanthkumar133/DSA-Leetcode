class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int maxi=0;
        for(int i:st){
            if(st.find(i-1)==st.end()){
                int key=i;
                int count=1;
                while(st.find(key+1)!=st.end()){
                    count++;
                    key+=1;
                }
                maxi=max(maxi,count);
            }
        }
        return maxi;
    }
};