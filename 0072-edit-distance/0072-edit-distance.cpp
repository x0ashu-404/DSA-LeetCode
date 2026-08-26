class Solution {
public:
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();

        vector<vector<int>> dp(n+1, vector<int>(m+1));

        for(int i=1; i<=n; ++i){
            dp[i][0] = i;
        }

        for(int j=1; j<=m; ++j){
            dp[0][j] = j;
        }

        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                // same character
                if(word1[i-1] == word2[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }
                else{
                    int top_left = dp[i-1][j-1];
                    int top = dp[i-1][j];
                    int left = dp[i][j-1];
                    dp[i][j] = min(top_left, min(top, left)) + 1;
                }
            }
        }

        return dp[n][m];
    }
};