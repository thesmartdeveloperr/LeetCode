class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        string res="";
        for(int i=0;i<s.size();++i){
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]==')'){
                if(st.empty())
                    s[i]='.';
                else
                    st.pop();
            }
        }
        while(st.size()){
            s[st.top()]='.';
            st.pop();
        }
        for(auto i:s)
            if(i!='.')
                res+=i;
        return res;
    }
};