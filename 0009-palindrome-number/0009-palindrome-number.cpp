class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0){
            return false;
        }

        long pal = 0;
        int original = x;
       
        while (x>0){
            pal = pal*10 + (x%10);
            x = x/10;
        }
        if(pal == original){
            return true;
        }
        else{
            return false;
        }
    }
};