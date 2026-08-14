class Solution {
public:
    void fun(vector<int> &candidates, int target, int idx, int sum, vector<int> &temp, vector<vector<int>> &ans){
        if(sum == target){
            ans.push_back(temp);
            return ;
        }

        if(sum > target) {
            return ;
        }

        for(int i=idx; i<candidates.size(); i++){
            if(i>idx && candidates[i] == candidates[i-1]){
                continue;
            }

            temp.push_back(candidates[i]);
            sum += candidates[i];
            fun(candidates, target, i+1, sum, temp, ans);
            sum -= candidates[i];
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        int idx = 0;
        int sum = 0;

        vector<int> temp;
        vector<vector<int>> ans;

        fun(candidates, target, idx, sum, temp, ans);

        return ans;
    }
};