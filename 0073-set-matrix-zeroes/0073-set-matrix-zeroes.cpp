class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> row;
        unordered_set<int> column;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j] == 0){
                    row.insert(i);
                    column.insert(j);
                }
            }
        }

        for(auto it:row){
            for(int c=0; c<matrix[0].size(); c++){
                matrix[it][c] = 0;
            }
        }

        for(auto val:column){
            for(int r=0; r<matrix.size(); r++){
                matrix[r][val] = 0;
            }
        }
    }
};