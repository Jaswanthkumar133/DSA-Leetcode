class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string maxi=*max_element(strs.begin(),strs.end());
        string mini=*min_element(strs.begin(),strs.end());
        string ans="";
        for(int i=0;i<mini.size();i++){
            if(maxi[i]==mini[i]){
                ans+=mini[i];
            }else{
                break;
            }
        }
        return ans;
    }
};