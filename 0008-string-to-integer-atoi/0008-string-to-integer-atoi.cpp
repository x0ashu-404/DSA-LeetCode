class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int i = 0;
        int sign = 1;
        long long ans = 0;

        
        while(i<n and s[i] == ' '){
            i++;
        }

        if(i < n and (s[i] == '+' or s[i] == '-')){
            if(s[i] == '-'){
                sign = -1;
            }
            i++;
        }

        while(i<n and isdigit(s[i])){
            int curr = s[i] - '0';
            ans = ans*10 + curr;

            if(sign == 1 and ans > INT_MAX){
                return INT_MAX;
            }

            if(sign == -1 and -ans < INT_MIN){
                return INT_MIN;
            }

            i++;
        }

        
        return sign*ans;
       
    }
};