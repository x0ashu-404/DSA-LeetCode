class Solution {
public:
    string minWindow(string s, string t) {
        int low = 0;
        int min_len = INT_MAX;
        int start = 0;

        unordered_map<char, int> sp;
        unordered_map<char, int> tp;

        for(auto it : t){
            tp[it]++;
        }

        int required = tp.size();
        int formed = 0;
        
        for(int high=0; high<s.size(); high++){
            sp[s[high]]++;

            if(tp.count(s[high]) && sp[s[high]] == tp[s[high]]){
                formed++;
            }

            while(formed == required){
                int len = high - low + 1;

                if(len<min_len){
                    start = low;
                }
                min_len = min(min_len, len);

                if(tp.count(s[low]) and sp[s[low]] == tp[s[low]]){
                    formed--;
                } 
                
                sp[s[low]]--;
                low++;
            }
        }

        if(min_len > s.size()){
            return "";
        }
        else{
            return s.substr(start, min_len);
        }
    }
};