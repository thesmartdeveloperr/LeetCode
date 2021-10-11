class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res=0;
        int i=0,j=0;
        set<char> st;
        while(j<s.size()){
            if(st.find(s[j])==st.end()){
                st.insert(s[j]);
                j++;    
                res=res>st.size()?res:st.size();
            }
            else{
                st.erase(s[i]);
                i++;   
            }
        }
        return res;
    }
};