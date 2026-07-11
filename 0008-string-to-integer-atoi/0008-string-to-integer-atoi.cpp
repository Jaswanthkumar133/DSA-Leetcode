class Solution {
public:
    void helper(int i,int n ,string s,long long &ans,int sign){
        if(i>=n || !isdigit(s[i])){
            return;
        }
        ans=ans*10+(s[i]-'0');
        if(sign ==1 && ans>INT_MAX){
            ans= INT_MAX;
            return ;
        }
        if(sign ==-1 && ans>=(long long)INT_MAX+1){
            ans= INT_MIN;
            return;
        }
        helper(i+1,n,s,ans,sign);
    }
    int myAtoi(string s) {
        int n=s.size();
        int i=0;
        while(i<n && s[i]==' '){
            i++;
        }
        int sign =1;
        if(s[i]=='-' || s[i]=='+'){
            if(s[i]=='-'){
                sign=-1;
            }
            i++;
        }
        long long ans=0;
        helper(i,n,s,ans,sign);
        return (int)sign*ans;
    }
};