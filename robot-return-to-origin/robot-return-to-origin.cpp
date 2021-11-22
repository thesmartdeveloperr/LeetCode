class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;
        for(auto i:moves){
            if(i=='U')
                y+=1;
            else if(i=='D')
                y-=1;
            else if(i=='L')
                x-=1;
            else if(i=='R')
                x+=1;
            else
                continue;
        }
        if(x==0 and y==0)
            return true;
        return false;
    }
};