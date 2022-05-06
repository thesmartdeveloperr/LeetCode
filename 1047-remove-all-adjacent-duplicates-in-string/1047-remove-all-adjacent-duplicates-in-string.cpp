class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(int i=0;i<s.size();++i){
            if(st.empty() or st.top()!=s[i]){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
        }
        s="";
        while(st.size()){
            s+=st.top();
            st.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};