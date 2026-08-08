class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
        int s=0;
        int e=nums.size()-1;
        vector<int> idx;
        while(s<=e){
            if(nums[s]+nums[e]==tar){
                idx.push_back(s+1);
                idx.push_back(e+1);
                break;
            }else{
                if(nums[s]+nums[e]<tar){
                    s++;
                }else{
                    e--;
                }
            }
        }
        return idx;
    }
};