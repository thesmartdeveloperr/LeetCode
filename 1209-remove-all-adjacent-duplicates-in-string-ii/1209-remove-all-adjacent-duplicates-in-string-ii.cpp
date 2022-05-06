class Solution {
public:
    string removeDuplicates(string s, int k) {
        string res="";
        stack<pair<char,int>> st;
        for(int i=0;i<s.size();++i){
            if(st.empty() or st.top().first!=s[i]){
                st.push({s[i],1});
            }
            else{
                auto popped=st.top();
                st.pop();
                st.push({popped.first,popped.second+1});
            }
            if(!st.empty() and st.top().second==k){
                st.pop();
            }
        }
        while(!st.empty()){
            int freq=st.top().second;
            while(freq--)
                res+=st.top().first;
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};