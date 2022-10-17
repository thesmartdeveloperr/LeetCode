class Solution {
public:
    bool checkIfPangram(string s) {
        unordered_set<char> st;
        for(auto it:s)
            st.insert(it);
        return st.size() == 26;
    }
};