class Solution {
public:
    vector<int> finalPrices(vector<int>& p) {
        stack<int>s;
        s.push(0);
        vector<int>ans;
        int n=p.size();

        for(int i=n-1;i>=0;i--)
        {
            while(s.top()>p[i])
            s.pop();

            ans.push_back(p[i]-s.top());
            s.push(p[i]); 
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};