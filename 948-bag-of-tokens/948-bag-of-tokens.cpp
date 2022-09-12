class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int score=0;
        int i=0;
        int j=tokens.size()-1;
        while(i<=j){
            if(power>=tokens[i]){
                score+=1;
                power-=tokens[i];
                i++;
            }
            else if(score>=1 and j-i>1){
                score-=1;
                power+=tokens[j];
                j--;
            }
            else
                break;
        }
        return score;
    }
};