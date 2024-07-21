class Solution {
public:
 void solve(vector<string>&ans, string s,int open,int closed ,int n)
 {
    if(open+closed==2*n)
    {
        ans.push_back(s);
        return ;
    }
    if(open<n)
    solve(ans,s+"(",open+1,closed,n);
    if(closed<open)
    solve(ans,s+")",open,closed+1,n);
 }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(ans,"",0,0,n);
        return ans;
    }
};