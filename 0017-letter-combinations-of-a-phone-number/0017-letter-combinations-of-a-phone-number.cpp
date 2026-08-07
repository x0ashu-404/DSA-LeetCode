class Solution {
public:
    void fun(const string digits, int n, int idx, string temp, vector<string> &ans, unordered_map<char, string> &mp){
        if(idx == n){
            ans.push_back(temp);
            return ;
        }

        string choice = mp[digits[idx]];

        for(int i=0; i<choice.size(); i++){
            temp.push_back(choice[i]);
            fun(digits, n, idx+1, temp, ans, mp);
            temp.pop_back();
        }

        return ;
    }
    vector<string> letterCombinations(string digits) {
        int n = digits.size();
        int idx = 0;
        vector<string> ans;
        string temp;

        unordered_map<char, string> mp;
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";

        fun(digits, n, idx, temp, ans, mp);

        return ans;
    }
};