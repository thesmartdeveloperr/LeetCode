class Solution {
public:
    int singleNumber(vector<int>& A) {
        int result = 0;
        int n=A.size();
        for (int i = 0; i<n; i++)
        result ^=A[i];
	    return result;   
    }
};