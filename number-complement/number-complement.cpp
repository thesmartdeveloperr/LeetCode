class Solution {
public:
    int findComplement(int num) {
        int mask=0,Num=num;
        while(Num){
            mask = mask<<1 | 1;
            Num = Num>>1;
        }
        return ~num & mask;
    }
};