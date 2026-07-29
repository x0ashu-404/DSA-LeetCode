class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        vector<int> r_max(n,0);
        r_max[n-1] = height[n-1];

        vector<int> l_max(n,0);
        l_max[0] = height[0];

        for(int i=1; i<n; i++){
            if(height[i] >= l_max[i-1]){
                l_max[i] = height[i];
            }else{
                l_max[i] = l_max[i-1];
            }
        }

        for(int i=n-2; i>=0; i--){
            if(height[i] >= r_max[i+1]){
                r_max[i] = height[i];
            }else{
                r_max[i] = r_max[i+1];
            }
        }

        int ans = 0;
        for(int i=0; i<n; i++){
            int curr_water = min(l_max[i], r_max[i]) - height[i];
            if(curr_water < 0){
                ans += 0;
            }
            else{
                ans += curr_water;
            }
        }

        return ans;
    }
};