class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> st;
        for(auto it:wordDict){
            st.insert(it);
        }

        int max_len = 0;

        for(auto it:wordDict){
            max_len = max(max_len, (int)it.length());
        }

        int n = s.size();

        vector<bool> dp(n+1);

        dp[0] = true;

        for(int i=1; i<=n+1; i++){

            for(int j=i-1; j>=max(i-max_len, 0); j--){
                if(dp[j] and st.contains(s.substr(j, i-j))){
                    dp[i] = true;
                    break;
                }
            }
        }

        return dp[n];
    }
};