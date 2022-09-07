class Solution {
public:
    int nextGreaterElement(int n) {
        string tmp=to_string(n);
        next_permutation(tmp.begin(),tmp.end());
        if(n>=stoll(tmp) or stoll(tmp)>INT_MAX)
            return -1;
        return stoll(tmp);
    }
};