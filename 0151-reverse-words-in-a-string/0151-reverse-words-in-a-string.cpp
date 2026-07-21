class Solution {
public:
    string reverseWords(string s) {
        int i=s.size()-1;
        string ans="";
        while(i>=0){
            while(i>=0 && s[i]==' '){
                i--;
            }
            if(i<0){
                break;
            }
            int ind=i;
            while(i>=0 && s[i]!=' '){
                i--;
            }
            
            if(!ans.empty()){
                ans+=' ';
            }
            ans+=s.substr(i+1,ind-i);
        }
        return ans;
    }
};