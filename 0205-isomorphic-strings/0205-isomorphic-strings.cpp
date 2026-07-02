class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int>stoT;
        unordered_map<char,int>Ttos;
        for(int i=0;i<s.size();i++){
            if(stoT[s[i]]==0){
                stoT[s[i]]=t[i];
            }
            if(stoT[s[i]]!=0 && stoT[s[i]]!=t[i]){
                return false;
            }
            if(Ttos[t[i]]==0){
                Ttos[t[i]]=s[i];
            }
            if(Ttos[t[i]]!=0 && Ttos[t[i]]!=s[i]){
                return false;
            }
        }
        return true;
    }
};