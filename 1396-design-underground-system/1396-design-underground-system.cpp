class UndergroundSystem {
public:
    unordered_map<int,pair<string, int>> mp;
    unordered_map<string,pair<int,int>> stats;
    void checkIn(int id, string startStation, int timeIn) {
    mp[id] = {startStation, timeIn};
    }
    void checkOut(int id, string endStation, int timeOut) {
        const auto &[startStation, timeIn] = mp[id];
        auto &[totalDuration, tripsCnt] = stats[startStation + ">" +            endStation];
        totalDuration += timeOut - timeIn;
        ++tripsCnt;
    }
    double getAverageTime(string startStation, string endStation) {
        auto [totalDuration, tripsCnt] = stats[startStation + ">" +             endStation];
        return (double)totalDuration / tripsCnt;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */