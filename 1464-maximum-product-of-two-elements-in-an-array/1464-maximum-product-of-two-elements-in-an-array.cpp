class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int lar = nums[0];
        int sec_lar = INT_MIN;

        for(int i=1; i<nums.size(); i++){
            if(nums[i]>=lar){
                sec_lar = lar;
                lar = nums[i];
            }
            else if(nums[i]>=sec_lar and nums[i]<lar){
                sec_lar = nums[i];
            }
        }
        int ans = (lar-1)*(sec_lar-1);
        return ans;
    }
};