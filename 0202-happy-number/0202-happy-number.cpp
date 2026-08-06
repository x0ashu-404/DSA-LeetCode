class Solution {
public:
    bool isHappy(int n) {
        unordered_set <int> st;
        int curr = 0;
        while(true){
            if(st.contains(n)){
                break;
            }
            st.insert(n);

            int sum = 0;

            while(n>0){
                curr = n%10;
                curr = curr*curr;
                
                sum += curr;

                n/=10;
            }
            if(sum == 1){
                return true;
            }

            n = sum; 
        }

        return false;
    }
};