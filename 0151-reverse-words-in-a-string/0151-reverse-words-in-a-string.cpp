class Solution {
public:
    string reverseWords(string s) {
        int i=s.size();
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
            string word=s.substr(i+1,ind-i);
            if(!ans.empty()){
                ans+=' ';
            }
            ans+=word;
        }
        return ans;
    }
};