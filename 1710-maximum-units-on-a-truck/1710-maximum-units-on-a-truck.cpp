class Solution {
public:
    static bool comp(vector<int> &a,vector<int> &b){
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int res=0;
        sort(boxTypes.begin(),boxTypes.end(),comp);
        for(int i=0;i<boxTypes.size();++i){
            if(truckSize<=0)
                break;
            res+=min(truckSize,boxTypes[i][0])*boxTypes[i][1];
            truckSize-=boxTypes[i][0];
        }
        return res;
    }
};