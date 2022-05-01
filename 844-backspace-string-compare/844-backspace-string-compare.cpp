class Solution {
public:
    bool backspaceCompare(string s, string t) {
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
        for(auto i:t){
            if(st.empty() and i=='#')
                continue;
            else if(i=='#')
                st.pop();
            else
                st.push(i);
        }
        t="";
        while(st.size()){
            t+=st.top();
            st.pop();
        }
        return s==t;
    }
};