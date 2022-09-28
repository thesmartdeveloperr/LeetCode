class Solution {
public:
    string pushDominoes(string dominoes) {
        string res="";
        int n=dominoes.size();
        vector<int> l2r(n,INT_MAX),r2l(n,INT_MAX);
        // left->right
        bool fl=0;
        for(int i=0;i<n;++i){
            if(dominoes[i]=='R')
                l2r[i]=0,fl=1;
            else if(fl and i>0 and dominoes[i]=='.')
                l2r[i]=l2r[i-1]+1;
            else
                fl=0;
        }
        //right->left
        fl=0;
        for(int i=n-1;i>=0;--i){
            if(dominoes[i]=='L')
                r2l[i]=0,fl=1;
            else if(fl and i<n and dominoes[i]=='.')
                r2l[i]=r2l[i+1]+1;
            else
                fl=0;
        }
        for(int i=0;i<n;++i){
            if(l2r[i]==r2l[i])
                res+=".";
            else if(l2r[i]<r2l[i])
                res+="R";
            else
                res+="L";
        }
        return res;
    }
};