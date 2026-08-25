class Solution {
public:
    int fun(vector<vector<int>>& triangle, int i, int j, vector<vector<int>> &dp){
        if(i == triangle.size()-1){
            return triangle[i][j];
        }
        if(dp[i][j] != INT_MAX){
            return dp[i][j]; 
        }
        int left = fun(triangle, i+1, j, dp);
        int right = fun(triangle, i+1, j+1, dp);

        dp[i][j] = triangle[i][j] + min(left, right);
        
        return dp[i][j];
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> dp(triangle.size(), vector<int>(triangle.size(),INT_MAX));

        return fun(triangle, 0, 0, dp);
    }
};