class Solution {
public:
    int maxProduct(int n) {
        int largest = INT_MIN;
        int second_largest = INT_MIN;
        
        while(n>0){
            int x = n%10;
            if(x >= largest){
                second_largest = largest;
                largest = x;
            }
            else if(x < largest and x >= second_largest){
                second_largest = x;
            }
            n = n/10;
        }

        return largest*second_largest;
    }
};