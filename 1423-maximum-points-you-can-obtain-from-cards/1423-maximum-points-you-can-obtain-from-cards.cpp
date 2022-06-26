class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int res=INT_MIN;
        vector<int> left_pref,right_pref;
        long long sum=0;
        for(int i=0;i<cardPoints.size();++i){
            sum+=cardPoints[i];
            left_pref.push_back(sum);
        }
        sum=0;
        for(int i=cardPoints.size()-1;i>=0;--i){
            sum+=cardPoints[i];
            right_pref.push_back(sum);
        }
        for(int i=0;i<=k;++i){
            int val1,val2;
            if(i==0)
                val1=0,val2=right_pref[k-1];
            else if(i==k)
                val1=left_pref[k-1],val2=0;
            else
                val1=left_pref[i-1],val2=right_pref[k-1-i];
            res=max(res,val1+val2);
        }
        return res;
    }
};