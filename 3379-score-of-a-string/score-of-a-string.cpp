class Solution {
public:
    int scoreOfString(string s) {
        int score=0;
        for(int i=0;i<s.length()-1;i++)
        {
            score=score+abs(s[i]-s[i+1]);
            //cout<<s[i]<<'-'<<s[i+1]<<endl;
        }
        return score;
    }
};