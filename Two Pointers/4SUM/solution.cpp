class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, long long target) {
        int n = nums.size();

        vector<vector<int>> result;

        sort(nums.begin(), nums.end());

        for(long long i=0; i<n-3; i++){
            if(i>0 and nums[i]==nums[i-1]){
                continue;
            }
            for(long long j=i+1; j<n-2; j++){
                if(j>i+1 and nums[j]==nums[j-1]){
                    continue;
                }

                long long sum = target - nums[i] - nums[j];

                long long l = j+1 ;
                long long r = n-1;
                while(l<r){
                    long long s = (long long)nums[l]+nums[r];

                    if(s==sum){
                        result.push_back({nums[i], nums[j], nums[l], nums[r]});
                        l++;
                        r--;

                        while(l<n and nums[l]==nums[l-1]){
                            l++;
                        }
                        
                        while(r>=0 and nums[r]==nums[r+1]){
                            r--;
                        }
                    }
                    else if(s<sum){
                        l++;
                    }
                    else{
                        r--;
                    }
                }
            }
        }
        return result;
    }
};
