class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;

        for(int i=0; i<nums.size()-1;){
            if(nums[i] == nums[i+1]){
                count++;
            }else{
                count = 0;
            }

            if(count > 1){
                nums.erase(nums.begin()+(i+1));
            }else{
                i++;
            }
        }

        return nums.size();
    }
};