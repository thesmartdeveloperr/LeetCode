class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int res=0;
        while(target>startValue){
            target = target % 2 == 0 ? target/2 : target+1;
            res++;
        }
        res+=startValue-target;
        return res;
    }
};