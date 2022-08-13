class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int radius=INT_MIN;
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());
        int j=0;
        for(int i=0;i<houses.size();++i){
            int diff=abs(heaters[j]-houses[i]);
            while(j<heaters.size()-1 and abs(heaters[j+1]-houses[i])<=diff){
                diff=abs(heaters[j+1]-houses[i]);
                j++;
            }
            radius=max(radius,diff);
            if(j==heaters.size())
                  j--;
        }
        return radius;
    }
};