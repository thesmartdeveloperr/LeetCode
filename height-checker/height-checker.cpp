class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int res=0;
        vector<int> temp(heights.begin(),heights.end());
        sort(temp.begin(),temp.end());
        for(int i=0;i<heights.size();++i)
            if(temp[i]!=heights[i])
                res++;
        return res;
    }
};