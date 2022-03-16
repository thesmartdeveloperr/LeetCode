class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int i=0,j=0;
        int n=pushed.size();
        while(i<n and j<n){
            while(i<n){
                st.push(pushed[i]);
                if(pushed[i]==popped[j]){
                    i++;
                    break;   
                }
                i++;   
            }
            while(j<n and !st.empty() and st.top()==popped[j]){
                st.pop();
                j++;   
            }
        }
        return st.empty();
    }
};