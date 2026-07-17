class Solution {
public:
    int mySqrt(int x) {
        int st = 0;
        int end = x;

        if(x == 0 or x == 1){
            return x;
        }

        while(st<=end){
            int mid = st + (end-st)/2;

            if(mid == x/mid and x%mid == 0){
                return mid;
            }
            else if(mid <= x/mid){
                st = mid+1;
            }
            else if(mid > x/mid){
                end = mid-1;
            }
        }
        return end;
    }
};