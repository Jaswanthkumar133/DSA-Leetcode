class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>freq(102,0);
        for(int i:nums){
            freq[i]++;
        }
        vector<int>temp;
        for(int i=0;i<102;i++){
            if(freq[i]>1){
                temp.push_back(i);
            }
        }
        return temp;
    }
};