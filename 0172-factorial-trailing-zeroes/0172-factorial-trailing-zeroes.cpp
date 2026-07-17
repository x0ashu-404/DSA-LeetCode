#include <cmath>
class Solution {
public:
    int trailingZeroes(int n) {
        int val = INT_MAX;
        int count = 0;

        while(true){
            if(n/5 == 0){
                break;
            }

            count += n/5;
            n = n/5;
        }
        return count;
    }
};