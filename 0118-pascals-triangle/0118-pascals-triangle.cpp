class Solution {
public:
    int fact(int n,int r){
        int res=1;
        for(int i=0;i<r;i++){
            res*=(n-i);
            res/=(i+1);
        }
        return res;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>temp;
        for(int i=0;i<numRows;i++){
            vector<int>ans;
            for(int j=0;j<=i;j++){
                ans.push_back(fact(i,j));
            }
            temp.push_back(ans);
        }
        return temp;
    }
};