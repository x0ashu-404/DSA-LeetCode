class Solution {
public:
    void fun(vector<int> &candidates, int target, int idx, int sum, vector<int> &temp, vector<vector<int>> &ans){
        if(sum == target){
            ans.push_back(temp);
            return ;
        }

        if(sum > target){
            return ;
        }

        for(int i=idx; i<candidates.size(); i++){
            temp.push_back(candidates[i]);
            sum += candidates[i];
            fun(candidates, target, i, sum, temp, ans);
            sum -= candidates[i];
            temp.pop_back();
        }
        return ;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int idx = 0;
        int sum = 0;

        vector<int> temp;
        vector<vector<int>> ans;

        fun(candidates, target, idx, sum, temp, ans);

        return ans;
        
    }
};