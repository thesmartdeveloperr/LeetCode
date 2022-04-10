class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        int res=0;
        for(auto i:ops){
            if(i=="C"){
                st.pop();
            }
            else if(i=="D"){
                st.push(2*st.top());
            }
            else if(i=="+"){
                int val1=st.top();
                st.pop();
                int val2=st.top();
                st.push(val1);
                st.push(val1+val2);
            }
            else{
                int val=stoi(i);
                st.push(val);
            }
        }
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        return res;
    }
};