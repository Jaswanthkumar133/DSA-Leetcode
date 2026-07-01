class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> temp;
        int rowS = 0;
        int colS = 0;
        int rowE = matrix.size() - 1;
        int colE = matrix[0].size() - 1;
        while(colS<=colE && rowS<=rowE){
            for(int i=colS;i<=colE;i++){
                temp.push_back(matrix[rowS][i]);
            }
            rowS++;
            for(int i=rowS;i<=rowE;i++){
                temp.push_back(matrix[i][colE]);
            }
            colE--;
            if(rowS<=rowE){
                for(int i=colE;i>=colS;i--){
                    temp.push_back(matrix[rowE][i]);
                }
                rowE--;
            }
            if(colS<=colE){
                for(int i=rowE;i>=rowS;i--){
                    temp.push_back(matrix[i][colS]);
                }
                colS++;
            }
        }
        return temp;
    }
};