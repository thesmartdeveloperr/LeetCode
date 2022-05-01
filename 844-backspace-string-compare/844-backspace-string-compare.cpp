class Solution {
public:
    string calc(string s){
        stack<char> st;
        for(auto i:s){
            if(st.empty() and i=='#')
                continue;
            else if(i=='#')
                st.pop();
            else
                st.push(i);
        }
        s="";
        while(st.size()){
            s+=st.top();
            st.pop();
        } 
        return s;
    }
    bool backspaceCompare(string s, string t) {
        return calc(s)==calc(t);
    }
};