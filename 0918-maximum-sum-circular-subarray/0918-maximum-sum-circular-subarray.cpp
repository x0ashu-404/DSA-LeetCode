class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalsum = 0;
        
        int currmax = 0, maxsum=INT_MIN;
        int currmin = 0, minsum = INT_MAX;

        for(int val : nums){
            totalsum += val; //total sum of all elements

            // maximum subarray
            currmax += val;
            maxsum = max(maxsum, currmax);
            if(currmax<0){
                currmax=0;
            }

            // minimum subarray
            currmin += val;
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