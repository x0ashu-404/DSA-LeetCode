class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();

        int low=0;
        int high=0;
        int res=n+1;
        int sum=0;
        int len=0;

        while(high<n){
            sum = sum+nums[high];

            while(sum>=target){
                len = high-low+1;
                res = min(res, len);

                sum = sum-nums[low];
                low++;
            }
            high++;
        }
        if(res<=n){
            return res;
        }
        else{
            return 0;
        }
    }
};