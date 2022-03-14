class Solution {
public:
    string simplifyPath(string path) {
        string res="",tmp;
        stack<string> st;
        for(int i=0;i<path.size();++i){
            if(path[i]=='/')
                continue;
            tmp="";
            while(i<path.size() and path[i]!='/')
                tmp+=path[i++];
            if(tmp==".")
                continue;
            else if(tmp==".."){
                if(!st.empty())
                st.pop();   
            }
            else
                st.push(tmp);
        }
        if(st.empty())
            return "/";
        while(!st.empty()){
            res="/"+st.top()+res;
            st.pop();
        }
        return res;
    }
};