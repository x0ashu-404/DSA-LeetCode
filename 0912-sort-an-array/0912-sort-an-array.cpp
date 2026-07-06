class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int> pq;

        for(auto it : nums){
            pq.push(it);
        }

        for(int i=nums.size()-1; i>=0; i--){
            nums[i] = pq.top();
            pq.pop();
        }

        return nums;
    }
};