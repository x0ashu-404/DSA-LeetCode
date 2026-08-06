class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ns(s);
        vector<string> word;
        string temp;

        while(ns >> temp){
            word.push_back(temp);
        }

        if(pattern.size() != word.size()) return false;

        unordered_map<char, string> m1;
        unordered_map<string, char> m2;

        for(int i=0; i<pattern.size(); i++){
            if(!m2.contains(word[i]) and !m1.contains(pattern[i])){
                m1[pattern[i]] = word[i];
                m2[word[i]] = pattern[i];

            }

            if(m1[pattern[i]] != word[i] or m2[word[i]] != pattern[i]){
                return false;
            }
            
        }

        return true;

        
    }
};