class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int rl = 0;
        unordered_map<char, int> mp;
        for(auto it:magazine){
            mp[it]++;
        }

        unordered_map<char, int> rp;
        for(auto val:ransomNote){
            rp[val]++;
        }

        for(int i=0; i<ransomNote.size(); i++){
            if(rp[ransomNote[i]] > mp[ransomNote[i]]){
                return false;
            }
        }
        return true;

        // while(rl<ransomNote.size()){
        //     rp[ransomNote[rl]]++;
        //     if(rp[ransomNote[rl]] != mp[magazine[rl]]){
        //         rl++;
        //     }
        // }
        // if(rl == ransomNote.size()){
        //     return true;
        // }else{
        //     return false;
        // }
    }
};