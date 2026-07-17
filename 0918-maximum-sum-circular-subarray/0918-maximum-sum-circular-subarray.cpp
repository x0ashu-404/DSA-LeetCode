class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxsum=INT_MIN;
        int currmax=0;
        int totalsum = 0;
        int currmin = 0;
        int minsum = INT_MAX;

        for(int val : nums){
            totalsum += val;
            currmax += val;
            maxsum = max(maxsum, currmax);
            if(currmax<0){
                currmax=0;
            }
        }

        for(int it:nums){
            currmin += it;
            minsum = min(currmin, minsum);
            if(currmin>0){
                currmin=0;
            }
        }
        
        
        if(maxsum<0){
            return maxsum;
        } else{
            return max(maxsum , (totalsum-minsum));
        }
    }
};