class Solution {
public:
    int maxProduct(int n) {
        vector<int>ans;
        while(n>0){
            int lasd=n%10;
            ans.push_back(lasd);
            n=n/10;
        }
        int maxi=0;
        for(int i=0;i<ans.size()-1;i++){
            for(int j=i+1;j<ans.size();j++){
                int mx=ans[i]*ans[j];
                maxi=max(maxi,mx);
            }
        }
        return maxi;
    }
};