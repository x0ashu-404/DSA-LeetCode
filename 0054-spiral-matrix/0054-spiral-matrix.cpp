class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;

        int row = matrix.size();
        int col = matrix[0].size();

        int top = 0;
        int bottom = row-1;
        int left = 0;
        int right = col-1;

        while(top <= bottom and left <= right){
            for(int i = left; i<=right; i++){   //top row traversal
                res.push_back(matrix[top][i]);
            }
            top++;

            if(top>bottom) break;

            for(int i=top; i<=bottom; i++){     // right col traversal
                res.push_back(matrix[i][right]);
            }

            right--;

            if(left>right) break;

            for(int i=right; i>=left; i--){     // bottom row traversal
                res.push_back(matrix[bottom][i]);
            }
            
            bottom--;
            if(top>bottom) break;

            for(int i=bottom; i>=top; i--){     // left col traversal
                res.push_back(matrix[i][left]);
            }

            left++;
        }
        return res;
    }
};