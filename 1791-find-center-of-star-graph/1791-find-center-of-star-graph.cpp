class Solution {
public:
    // logically the center will be the node that has the max. number of connections...
    int findCenter(vector<vector<int>>& edges) {
        if(edges[0][0]==edges[1][0] or edges[0][0]==edges[1][1])
            return edges[0][0];
        else
            return edges[0][1];
    }
};