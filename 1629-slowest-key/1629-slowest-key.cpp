class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int diff=0;
        for(int i=0;i<releaseTimes.size();++i){
            if(i==0)
                diff=releaseTimes[i];
            else
                diff=max(diff,releaseTimes[i]-releaseTimes[i-1]);
        }
        char res;
        for(int i=0;i<releaseTimes.size();++i){
            if(i==0){
                if(releaseTimes[i]==diff)
                    res=max(res,keysPressed[i]);
                continue;
            }
            if(releaseTimes[i]-releaseTimes[i-1]==diff)
                res=max(res,keysPressed[i]);   
        }
        return res;
    }
};