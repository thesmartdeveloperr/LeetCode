class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        map<int,int> mp;
        for(auto i:arr)
            mp[i]++;
        int i=0;
        while(k>0){
            i++;
            if(mp.find(i)==mp.end())
                k--;
        }
        return i;
    }
};