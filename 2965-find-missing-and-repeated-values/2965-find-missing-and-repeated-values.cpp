class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int>temp(n*m+1,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                temp[grid[i][j]]++;
            }
        }
        vector<int>res(2,0);
        for(int i=1;i<temp.size();i++){
            if(temp[i]==0){
                res[1]=i;
            }
            if(temp[i]>1){
                res[0]=i;
            }
        }
        return res;
    }
};