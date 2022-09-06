class Solution {
public:
    int res=INT_MAX;
    void compute(int i,int k,vector<int> &cookies,vector<int> &v){
        if(i==cookies.size()){
            int tmp=*max_element(v.begin(),v.end());
            for(auto i:v)
                cout<<i<<" ";
            cout<<endl;
            res=min(res,tmp);
            return;
        }
        for(int j=0;j<k;++j){
            v[j]+=cookies[i];
            compute(i+1,k,cookies,v);
            v[j]-=cookies[i];
            if(v[j]==0)
                break;
        }
    }
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int> v(k,0);
        compute(0,k,cookies,v);
        return res;
    }
};