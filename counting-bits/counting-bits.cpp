class Solution {
public:
    int numOfOnes(int i){
        int num=0;
        while(i){
            num++;
            i&=i-1;
        }
        return num;
    }
    vector<int> countBits(int n) {
        vector<int> res;
        for(int i=0;i<n+1;++i)
            res.push_back(numOfOnes(i));
        return res;
    }
};