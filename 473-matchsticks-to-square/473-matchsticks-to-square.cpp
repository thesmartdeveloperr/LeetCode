class Solution {
public:
    int backtrack(int i,int side,vector<int> &matchsticks,vector<int> &sides){
        if(i==matchsticks.size())
            return true;
        
        for(int j=0;j<4;++j){
            if(sides[j]+matchsticks[i]<=side){
                sides[j]+=matchsticks[i];
                if(backtrack(i+1,side,matchsticks,sides))
                    return true;
                sides[j]-=matchsticks[i];
            }
        }
        return false;
    }
    bool makesquare(vector<int>& matchsticks) {
        sort(matchsticks.begin(),matchsticks.end(),greater<int>());
        vector<int> sides(4,0);
        int side=accumulate(matchsticks.begin(),matchsticks.end(),0);
        if(side%4)
            return false;
        side/=4;
        return backtrack(0,side,matchsticks,sides);
    }
};