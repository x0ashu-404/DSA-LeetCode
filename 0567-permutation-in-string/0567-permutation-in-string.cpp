class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;

        int n = s1.size();

        vector<int> frq(26, 0);
        for(int i=0; i<n; i++){
            frq[s1[i] - 'a']++;
        }

        int low = 0;
        int high = n-1;
    
        vector<int> win_frq(26,0);
        for(int i=low; i<=high; i++){
            win_frq[s2[i] - 'a']++;
        }

        while(high < s2.size()){
            if(frq == win_frq)  return true;

            win_frq[s2[low] - 'a']--;
            low++;

            high++;
            if(high < s2.size()){
                win_frq[s2[high] - 'a']++;
            }
        }

        return false;
    }
};