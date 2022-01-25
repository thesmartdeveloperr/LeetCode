class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char , int> m;
        for(auto i:s)
        {
            m[i]++;
        }
        int temp=m[s[0]];    
        for(auto i:m)
        {  

            if(temp!=i.second)
            return false;
        }
        return true;
    }
};