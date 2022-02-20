class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {         int ct=0,left=-1,right=-1;
        
 sort(intervals.begin(),intervals.end());                            for(auto i:intervals){
            if(i[0]>left and i[1]>right){
                left=i[0];
                ++ct;
            }
            right=max(right,i[1]);
        }                                                        
        return ct;
    }
};