class Solution {
public:
    string getSmallestString(int n, int k) {
        string res="";
        char mp[27];
        int K=1;
        for(int i='a';i<='z';++i)
            mp[K++]=i;
        for(auto i:mp)
            cout<<i<<" ";
        while(k){
            char ch=(k-n+1>=26)?'z':mp[k-n+1];
            k-=ch-'a'+1;
            n--;
            res+=ch;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};