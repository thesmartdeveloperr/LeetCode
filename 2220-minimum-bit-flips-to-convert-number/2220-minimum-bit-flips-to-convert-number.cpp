class Solution {
public:
    int countSetBits(int x){
        int count=0;
        while(x){
            count++;
            x&=(x-1);
        }
        return count;
    }
    int minBitFlips(int start, int goal) {
        // return __builtin_popcount(start^goal);
        return countSetBits(start^goal);
    }
};