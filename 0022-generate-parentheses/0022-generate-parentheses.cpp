class Solution {
public:
    void fun(int close, int open, int n, vector<string> &ans, string &temp){
        if(open == n and close == n){
            ans.push_back(temp);
            return ;
        }

        // generating open
        if(open < n){
            temp.push_back('(');
            fun(close, open+1, n, ans, temp);
            temp.pop_back();
        }

        // generating close
        if(close < n and close < open){
            temp.push_back(')');
            fun(close+1, open, n, ans, temp);
            temp.pop_back();
        }

        return ;
    }
    vector<string> generateParenthesis(int n) {
        int close = 0;
        int open = 0;
        vector<string> ans;
        string temp;

        fun(close, open, n, ans, temp);

        return ans;
    }
};