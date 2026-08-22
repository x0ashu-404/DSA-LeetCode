class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        
        int sec_last = cost[0];
        int last = cost[1];

        for(int i=2; i<n; i++){
            int curr = min(last, sec_last) + cost[i];
            sec_last = last;
            last = curr;
        }

        return min(last, sec_last);
    }
};