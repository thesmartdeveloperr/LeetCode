class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=0;
        int i=0,j=0;
        set<char> st;
        while(j<s.size()){
            //if the character at j is already present...
            while(st.count(s[j])){
                st.erase(s[i]);
                i++;
            }
            st.insert(s[j]);
            len=max(len,j-i+1);
            j++;
        }
        return len;
    }
};

/*

Time Complexity -> O(2N)
Space Complexity -> O(N)

*/