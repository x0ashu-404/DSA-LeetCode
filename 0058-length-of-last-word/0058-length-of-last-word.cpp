class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size()-1;
        int ans = 0;
        
        // skip trailing blank space
        while(n>=0 and s[n] == ' '){
            n--;
        }

        // count length of word
        while(n>=0 and s[n] != ' '){
            ans++;
            n--;
        }
        return ans;
    }
};