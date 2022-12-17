class Solution {
public:
    long long calc(string c,long long a,long long b){
        if(c=="+"){
            return b+a;
        }
        else if(c=="-"){
            return b-a;
        }
        else if(c=="*"){
            return b*a;
        }
        else 
            return b/a;
    }
    int evalRPN(vector<string>& token) {
        stack<string>st;
        int i=0;
        while(i<token.size()){
            if(token[i]!="+" && token[i]!="-" && token[i]!="*" && token[i]!="/" ){
                st.push(token[i]);
            }
            else{
                string c=token[i];
                long long a=stol(st.top());
                st.pop();
                long long b=stol(st.top());
                st.pop();
                long long value=calc(c,a,b);
                st.push(to_string(value));
            }
            i++;
        }
        string ans=st.top();
        st.pop();
        long long res=stol(ans);
        return res;
        
    }
};