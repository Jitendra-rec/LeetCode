class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans;
        int t=0;
       for(int i=0;i<s.size();i++)
       {
            if( t<spaces.size() && i == spaces[t])
            {
                ans+=' ';
                t++;
            }
          
            ans+=s[i];
       } 

    //cout<<ans;
    return ans;
    }
};