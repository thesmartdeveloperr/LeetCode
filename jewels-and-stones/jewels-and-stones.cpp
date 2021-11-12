class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        for(int i=0;i<jewels.size();++i){
            int temp=jewels[i];
            for(int j=0;j<stones.size();++j)
                if(temp==stones[j])
                    count++;
        }
        return count;
    }
};