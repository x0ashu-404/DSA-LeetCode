class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }

        string pre = "";
        // for traversing all characters of first string
        for(int i=0; i<strs[0].size(); i++){
            char ch = strs[0][i];

            bool match = true;

            // for comparing ch with rest of the strings
            for(int j=1; j<strs.size(); j++){
                // not match 
                if(strs[j].size() < i or ch != strs[j][i]){
                    match = false;
                    break;
                }
            }
            if(match == false){
                break;
            }else{
                pre.push_back(ch);
            }
            
        }

        

        return pre;
    }
};