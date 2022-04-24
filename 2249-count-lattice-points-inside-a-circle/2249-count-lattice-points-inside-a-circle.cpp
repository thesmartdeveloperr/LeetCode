class Solution {
public:
    int countLatticePoints(vector<vector<int>>& circles) {
        set<pair<int,int>> st;
        for(int i=0;i<circles.size();++i){
            int a=circles[i][0],b=circles[i][1],r=circles[i][2];
            for(int j=-r;j<=r;++j){
                for(int k=-r;k<=r;++k){
                    if( j * j + k * k <= r * r)
                    st.insert({a+j,b+k});
                }
            }
        }
        return st.size();
    }
};