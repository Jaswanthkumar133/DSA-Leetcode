class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans.push_back(grid[i][j]);
            }
        }
        int l=ans.size();
        k=k%l;
        reverse(ans.begin(),ans.end()-k);
        reverse(ans.end()-k,ans.end());
        reverse(ans.begin(),ans.end());
        vector<vector<int>>temp(n,vector<int>(m,0));
        int y=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                temp[i][j]=ans[y++];
            }
        }
        return temp;
    }
};