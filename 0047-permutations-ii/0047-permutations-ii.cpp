class Solution {
public:
    void fun(vector<int> &nums, int n, int idx, vector<vector<int>> &ans){
        if(idx == n){
            ans.push_back(nums);
            return ;
        }

        unordered_set<int> st;

        for(int i=idx; i<n; i++){
            if(st.count(nums[i])){
                continue;
            }

            st.insert(nums[i]);

            swap(nums[idx], nums[i]);       //choose
            fun(nums, n, idx+1, ans);       //explore
            swap(nums[idx], nums[i]);       //backtrack
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int idx = 0;
        int n = nums.size();

        vector<vector<int>> ans;

        fun(nums, n, idx, ans);

        return ans;
    }
};