class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sl = 0;
        int tl = 0;

        while(tl<t.size() and sl<s.size()){
            if(s[sl]==t[tl]){
                sl++;
            }
            tl++;
        }
        if(sl == s.size()){
            return true;
        }
        else{
            return false;
        }
    }
};