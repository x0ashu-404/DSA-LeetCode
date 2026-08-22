class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        int a = 0;
        int b = 0;

        for(int i=n-1; i>=0; i--){
            int curr = max(b, nums[i] + a);
            a = b;
            b = curr;
        }

        return b;
    }
};