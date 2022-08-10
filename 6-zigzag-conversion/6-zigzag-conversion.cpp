class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)
            return s;
        string res="";
        vector<vector<char>> mat(numRows,vector<char>(1000,'#'));
        
        // store the values in the matrix...
        int i=0;
        int row=0,col=0;
        while(i<s.size()){
            for(int j=row;j<numRows and i<s.size();++j){
                mat[j][col]=s[i];
                i++;
            }
            row=numRows-2;
            col+=1;
            while(row>=0 and i<s.size()){
                mat[row][col]=s[i];
                row--;
                col++;
                i++;
            }
            row=1;
        }
        
        
        // compute the string from the matrix...
        for(int i=0;i<numRows;++i){
            for(int j=0;j<1000;++j){
                if(mat[i][j]!='#')
                    res+=mat[i][j];
            }
        }
        return res;
    }
};