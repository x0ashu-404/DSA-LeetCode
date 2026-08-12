class Solution {
public:
    void fun(vector<int> &nums, int n, int idx, int &sum, int curr){
        if(idx == n){
            sum += curr;
            return ;
        }

        fun(nums, n, idx+1, sum, curr);
        curr ^= nums[idx];
        fun(nums, n, idx+1, sum, curr);
    }
    int subsetXORSum(vector<int>& nums) {
        int sum = 0;
        int idx = 0;
        int curr = 0;
        int n = nums.size();

        fun(nums,n ,idx, sum, curr);

        return sum;
    }
};