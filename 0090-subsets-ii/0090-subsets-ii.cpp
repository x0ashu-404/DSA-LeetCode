class Solution {
public:
    void fun(vector<int> &nums, int n, int idx, vector<int> &temp, vector<vector<int>> &ans){
        ans.push_back(temp);

        for(int i=idx; i<n; i++){
            if(i>idx and nums[i] == nums[i-1]){
                continue;
            }

            temp.push_back(nums[i]);
            fun(nums, n, i+1, temp, ans);
            temp.pop_back();
        }

    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int idx = 0;

        vector<int> temp;
        vector<vector<int>> ans;

        fun(nums, n, idx, temp, ans);

        return ans;

    }
};