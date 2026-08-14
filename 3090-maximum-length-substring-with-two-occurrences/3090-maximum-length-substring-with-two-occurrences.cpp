class Solution {
public:
    int maximumLengthSubstring(string s) {
        int low = 0;
        int len = 0;
        int max_len = 0;

        unordered_map<char, int> mp;

        for(int high=0; high<s.size(); high++){
            mp[s[high]]++;
            
            if(mp[s[high]] <= 2){
                max_len = max(max_len , high-low+1);
            }
            else{
                while(mp[s[high]] > 2){
                    mp[s[low]]--;
                    low++;
                }
            }
        }

        return max_len;
    }
};