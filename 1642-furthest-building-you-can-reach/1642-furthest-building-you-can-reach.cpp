class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int i=0;
        priority_queue<int,vector<int>,greater<int>> pq;
        while(i<heights.size()-1){
            int diff=heights[i+1]-heights[i];
            if(diff>0)
                pq.push(diff);
            if(pq.size()>ladders){
                int d=pq.top();
                pq.pop();
                bricks-=d;
            }
            if(bricks<0)
                break;
            i++;
        }
        return i;
    }
};