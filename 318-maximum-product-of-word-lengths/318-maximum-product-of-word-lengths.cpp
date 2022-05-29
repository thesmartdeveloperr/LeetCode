class Solution {
public:
    int maxProduct(vector<string>& words) {
	    int n=words.size(),res=0;
	    vector<bitset<26>> chars(n);
	    for(int i=0;i<n;i++) {
		    for(auto &ch:words[i])
			    chars[i][ch-'a']=1;	
		    for(int j = 0; j < i; j++){
			    if(!checkCommon(chars[i], chars[j])){
                    int val=words[i].size()*words[j].size();
                    res=res>val?res:val;   
                }
            }
	    }   
	    return res;
    }
    bool checkCommon(bitset<26>& a, bitset<26>& b) {
	    for(int i=0;i<26;i++) 
            if(a[i] && b[i]) 
            return true;
	    return false;
    }
};