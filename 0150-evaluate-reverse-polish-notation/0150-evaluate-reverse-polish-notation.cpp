class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int res = 0;

        for(int i=0; i<tokens.size(); i++){
            if(tokens[i] != "+" and tokens[i] != "*" and tokens[i] != "-" and tokens[i] != "/"){
                st.push(stoi(tokens[i]));
            }
            else if(tokens[i] == "+"){
                res = st.top();
                st.pop();
                res += st.top();
                st.pop();
                st.push(res);
            }
            else if(tokens[i] == "*"){
                res = st.top();
                st.pop();
                res *= st.top();
                st.pop();
                st.push(res);
            }
            else if(tokens[i] == "-"){
                int a = st.top();
                st.pop();
                res = st.top();
                res -= a;
                st.pop();
                st.push(res);
            }
            else if(tokens[i] == "/"){
                int b = st.top();
                st.pop();
                res = st.top();
                res /= b;
                st.pop();
                st.push(res);
            }
        }
        return st.top();
    }
};