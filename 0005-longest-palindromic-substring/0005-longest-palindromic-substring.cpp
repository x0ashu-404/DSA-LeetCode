class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0;
        int max_len = 1;

        for(int i=0; i<s.size(); i++){
            
            // odd length palindrom 
            int l = i;
            int r = i;

            while(l>=0 and r<s.size() and s[l] == s[r]){
                int len = r-l+1;

                if(len > max_len){
                    start = l;
                    max_len = len;
                }
                l--;
                r++;
            }

            //  for even lenght palindrome  
            l = i;
            r = i+1;

            while(l>=0 and r<s.size() and s[l] == s[r]){
                int len = r-l+1;
                    
                if(len > max_len){
                    start = l;
                    max_len = len;
                }
                l--;
                r++;
            }
            

        }

        return s.substr(start, max_len);
    }
};