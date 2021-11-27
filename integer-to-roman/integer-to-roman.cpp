class Solution {
public:
    string intToRoman(int num) {
        string res="";
        vector<string> a{"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        vector<int> b{1,4,5,9,10,40,50,90,100,400,500,900,1000};
        for(int i=a.size()-1;i>=0;--i){
            int val=num/b[i];
            num%=b[i];
            while(val--)
                res+=a[i];
            if(num==0)
                break;
        }
        return res;
    }
};