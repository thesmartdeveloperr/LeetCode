class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> st;
        map<char,string> mp;
        mp['a']=".-",mp['b']="-...",mp['c']="-.-.",mp['d']="-..";
        mp['e']=".",mp['f']="..-.",mp['g']="--.",mp['h']="....",mp['i']="..",mp['j']=".---";
        mp['k']="-.-",mp['l']=".-..",mp['m']="--",mp['n']="-.";
        mp['o']="---";
        mp['p']=".--.";
        mp['q']="--.-";
        mp['r']=".-.";
        mp['s']="...";
        mp['t']="-";
        mp['u']="..-";
        mp['v']="...-";
        mp['w']=".--";
        mp['x']="-..-";
        mp['y']="-.--";
        mp['z']="--..";
        for(auto i:words){
            string res="";
            for(auto j:i)
                res+=mp[j];
            st.insert(res);
        }
        return st.size();
    }
};