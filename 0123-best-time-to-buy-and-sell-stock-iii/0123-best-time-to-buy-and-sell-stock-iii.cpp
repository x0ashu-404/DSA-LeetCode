class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> left(n);
        vector<int> right(n+1);

        int mini = prices[0];
        
        for(int i=1; i<n; i++){
            mini = min(mini, prices[i]);
            left[i] = max(left[i-1], prices[i]-mini);
        }

        int maxi = prices[n-1];
        for(int i=n-2; i>=0; i--){
            maxi = max(maxi, prices[i]);
            right[i] =  max(right[i+1], maxi-prices[i]);
        }

        int best = 0;
        for(int i=0; i<n; i++){
            best = max(best, left[i] + right[i]);
        }

        return best;
    }
};