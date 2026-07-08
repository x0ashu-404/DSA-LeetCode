class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n == 0) {
            return 0;
        }

        string s = to_string(n);
        string ans;
        for(int i=0; i<s.size(); i++){
            if(s[i] != '0'){
                ans.push_back(s[i]);
            }
        }

        int res = 0;
        for(int i=0; i<ans.size(); i++){
            res += ans[i] - '0';   
        }

        return stoll(ans)*res;
    }
};