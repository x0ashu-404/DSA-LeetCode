class Solution {
public:
    void fun(int n, int k, int idx, vector<int> &temp, vector<vector<int>> &ans){
        if(temp.size() == k){
            ans.push_back(temp);
            return ;
        }
        for(int i=idx; i<=n; i++){
            temp.push_back(i);
            fun(n, k, i+1, temp, ans);
            temp.pop_back();
        }
        return ;
    }
    vector<vector<int>> combine(int n, int k) {
        int idx = 1;
        vector<int> temp;
        vector<vector<int>> ans;

        fun(n, k, idx, temp, ans);

        return ans;
    }
};