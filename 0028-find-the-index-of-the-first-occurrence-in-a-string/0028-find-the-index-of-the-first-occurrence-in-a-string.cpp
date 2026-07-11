class Solution {
public:
    int strStr(string haystack, string needle) {
        int low = 0;
        int high = 0;
        int s = 0;
        int ans = -1;

        while(s<needle.size() and high<haystack.size()){
            while(s<needle.size() and high<haystack.size() and haystack[high] == needle[s]){
                high++;
                s++;
            }
            if(s == needle.size()){
                return low;
            }else{
                s = 0;
                low++;
                high = low;
            }
            
        }
        
        return ans;
    }
};