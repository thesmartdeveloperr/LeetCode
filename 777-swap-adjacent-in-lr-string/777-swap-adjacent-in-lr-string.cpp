class Solution {
public:
    bool canTransform(string start, string end) {
        int i=0,j=0;
        while(i<start.size() and j<end.size()){
            while(start[i]=='X')
                i++;
            while(end[j]=='X')
                j++;
            if(start[i]!=end[j])
                return false;
            if(start[i]=='L' and i<j)
                return false;
            if(start[i]=='R' and i>j)
                return false;
            i++;
            j++;
        }
        while(i<start.size() and start[i]=='X')
            i++;
        while(j<end.size() and end[j]=='X')
            j++;
        return i==j;
    }
};