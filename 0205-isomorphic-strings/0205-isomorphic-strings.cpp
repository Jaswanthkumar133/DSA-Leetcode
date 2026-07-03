class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,char>stoT;
        unordered_map<char,char>ttoS;
        for(int i=0;i<s.size();i++){
            if(stoT[s[i]]==0){
                stoT[s[i]]=t[i];
            };
            if(stoT[s[i]]!=t[i]){
                return false;
            }
            if(ttoS[t[i]]==0){
                ttoS[t[i]]=s[i];
            }
            if(ttoS[t[i]]!=s[i]){
                return false;
            }
        }
        return true;
    }
};