class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n,0);
        ans[0] = nums[0];
        int middle = n;
        int low = 1;
        for(int i=1; i<2*n; i++){
            if(i%2!=0){
                ans[i] = nums[middle];
                middle++;
            }else{
                ans[i] = nums[low];
                low++;
            }
        }
        return ans;
    }
};