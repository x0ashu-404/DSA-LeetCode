class Solution {
public:
    void permute(vector<int> &nums, int idx, vector<vector<int>> &result){
        
        if(idx == nums.size()){
            result.push_back(nums);
            return ;
        }

        for(int i=idx; i<nums.size(); i++){
            swap(nums[idx], nums[i]);       //choose

            permute(nums, idx+1, result);   // explore

            swap(nums[idx], nums[i]);       //backtrack
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int idx = 0;
        vector<vector<int>> result;

        permute(nums, idx, result);

        return result;
    }
};