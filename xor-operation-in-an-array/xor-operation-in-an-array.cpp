class Solution {
public:
    int xorOperation(int n, int start) {
        
        int xor_val=start;
        
        for(int i=1;i<n;++i)
            xor_val=xor_val^(start+2*i);
        
        return xor_val;
    }
};