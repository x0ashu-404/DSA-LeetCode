class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int rl = 0;
        unordered_map<char, int> mp;
        for(auto it:magazine){
            mp[it]++;
        }

        // unordered_map<char, int> rp;
        // for(auto val:ransomNote){
        //     rp[val]++;
        // }

        for(int i=0; i<ransomNote.size(); i++){
            if(mp[ransomNote[i]] == 0){
                return false;
            }
            mp[ransomNote[i]]--;
        }
        return true;
    }
};