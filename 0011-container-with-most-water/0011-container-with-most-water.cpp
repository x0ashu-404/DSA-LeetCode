class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int n = height.size();
        int lp = 0;
        int rp = n-1;
        
        while(lp<rp){
            int w = rp - lp;
            int ht = min(height[lp], height[rp]);
            int curr_wt = w*ht;
            ans = max(curr_wt, ans);
            height[lp]<height[rp]? lp++ : rp--;
        }
        return ans;
    }
};