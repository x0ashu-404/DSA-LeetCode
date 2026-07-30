class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()==0){
            return 1;
        }
        for(int i=0; i<s.size(); i++){
            s[i] = tolower(s[i]);
        }
        int l=0;
        int r=s.size()-1;
        while(l<r){
            if(!isalnum(s[l])){
                l++;
            }
            else if(!isalnum(s[r])){
                r--;
            }
            else if(s[l]==s[r]){
                l++;
                r--;
            }
            else return 0;
        }
        return 1;
    }
};