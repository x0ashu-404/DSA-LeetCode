class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
        int n = nums.size()-1;
        
        // vector <int> ans;
        for( int i=n; i>=0; i--){
            nums[i] = nums[i] + 1;
            
            if(nums[i] <= 9){
                return nums;
            }
            else if(nums[i] == 10){
                nums[i] = 0;
            }
        }

        if(nums[0] == 0){
            nums[0] = 1;
            nums.push_back(0);
        }

        return nums;   
    }
};