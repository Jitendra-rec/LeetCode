class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int score=0,max=0;
        int i=0,j=tokens.size()-1;
        while(i<=j)
        {
            if(power>=tokens[i])
            {
                score++;
                
                power=power-tokens[i];
                i++;
                cout<<score<<" "<<power<<endl;
                max=score;
            }
            else if(power<tokens[j] && score!=0)
            {
                
                score--;
               
                power=power+tokens[j];
                 j--;
                 cout<<score<<" "<<power<<endl;
            }
            else
            i++;
        
        }
        return max;
       // return score;
        
    }
};