class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int>sMt;
        unordered_map<char,int>tMs;
        for(int i=0;i<s.size();i++){
            if(sMt.find(s[i])==sMt.end()){
                sMt[s[i]]=t[i];
            }
            if(sMt.find(s[i])!=sMt.end()){
                if(sMt[s[i]]!=t[i]){
                    return false;
                }
            }
            if(tMs.find(t[i])==tMs.end()){
                tMs[t[i]]=s[i];
            }
            if(tMs.find(t[i])!=tMs.end()){
                if(tMs[t[i]]!=s[i]){
                    return false;
                }
            }
        }
        return true;
    }
};