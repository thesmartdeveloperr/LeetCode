class Solution {
public:
    static bool comp(vector<int> &a, vector<int> &b){
        return (a[0]==b[0])?(a[1]>b[1]):(a[0]<b[0]);
    }
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        int res=0;
        sort(properties.begin(),properties.end(),comp);
        int mx=INT_MIN;
        for(int i=properties.size()-1;i>=0;--i){
            if(mx>properties[i][1])
                res++;
            mx=max(mx,properties[i][1]);
        }
        return res;
    }
};