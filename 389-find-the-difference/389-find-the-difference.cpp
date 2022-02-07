class Solution {
public:
    char findTheDifference(string s, string t) {
        char val=0;
        for(auto i:s)
            val^=i;
        for(auto i:t)
            val^=i;
        return val;
        // return (char)(t.char().sum()-s.char().sum());
    }
};