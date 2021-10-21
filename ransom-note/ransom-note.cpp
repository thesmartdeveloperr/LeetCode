class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> ump_magazine;
        for(auto i:magazine)
            ump_magazine[i]++;
        for(auto i:ransomNote){
            if(ump_magazine.find(i)==ump_magazine.end() || ump_magazine[i]<=0)
                return false;
            else
            ump_magazine[i]--;
        }
        return true;
    }
};