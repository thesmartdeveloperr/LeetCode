class Solution {
public:
    long long numberOfTripsForGivenTime(vector<int>&a , long long int givenTime)
    {
        long long totalTrips = 0;
        for(auto x : a){
            // convert it to long long int 
            // long long int val = x;
			
            totalTrips += (givenTime / x);
        }
        return totalTrips;
    }
    long long minimumTime(vector<int>& arr ,  int totalTrips) {
        long long lowestTime = 1;
        long long highestTime = 1e14;
        while(lowestTime<highestTime)
        {
            long long mid = lowestTime + (highestTime-lowestTime)/2;
            
            if(numberOfTripsForGivenTime(arr , mid) >= totalTrips)
                highestTime = mid;
            else
                lowestTime = mid+1;
        }
        return lowestTime;
    }
};