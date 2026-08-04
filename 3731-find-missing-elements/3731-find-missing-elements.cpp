class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;

        int maximum = nums[0];
        int minimum = nums[0];

        for(int i=1; i<nums.size(); i++){
            if(nums[i]>=maximum){
                maximum = nums[i];
            }

            if(nums[i]<=minimum){
                minimum = nums[i];
            }
        }

        unordered_set<int> st;
        for(auto it:nums){
            st.insert(it);
        }

        while(minimum<=maximum){
            if(!st.count(minimum)){
                ans.push_back(minimum);
            }

            minimum++;
        }

        return ans;
    }

};