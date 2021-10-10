class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        unsigned long long int res=left;
        for(unsigned long long int i=left;i<=right;++i){
            res&=i;
            if(res==0)
                break;
        }
        return res;
    }
};