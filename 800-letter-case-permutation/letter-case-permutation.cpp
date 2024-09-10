class Solution {
public:
    void solve(string s,int i,vector<string>&ans,string temp)
    {
        if(i==s.length())
        { 
            ans.push_back(temp);
            return ;
        }
        if(s[i]>='a' && s[i]<='z')
        {
            solve(s,i+1,ans,temp+s[i]);
            temp=temp + char(s[i]-32);
            solve(s,i+1,ans,temp);
        }
        else  if(s[i]>='A' && s[i]<='Z')
        {
            solve(s,i+1,ans,temp+s[i]);
            temp=temp + char(s[i]+32);
            solve(s,i+1,ans,temp);
        }
        else
        solve(s,i+1,ans,temp+s[i]);
        
        
    }
    vector<string> letterCasePermutation(string s) {
         vector<string>ans;
         string temp="";
         int i=0;
         solve(s,i,ans,temp);
         return ans;
    }
};