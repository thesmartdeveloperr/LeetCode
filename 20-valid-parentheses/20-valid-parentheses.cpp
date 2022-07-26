class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto i:s){
            if(st.size()==0 or i=='{' or i=='[' or i=='('){
                st.push(i);
            }
            else if(st.top()=='(' and i==')')
                st.pop();
            else if(st.top()=='{' and i=='}')
                st.pop();
            else if(st.top()=='[' and i==']')
                st.pop();
            else
                return false;
        }
        return st.size()==0;
    }
};