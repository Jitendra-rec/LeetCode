class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& o, int m, int n) {
        cout<<n*m<<" "<<o.size()<<endl;
        if(n*m!=o.size())
        return {};

        vector<vector<int>>arr(m,vector<int>());
        int t=0;
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            if(t<o.size())
            arr[i].push_back(o[t++]);
            else
            return arr;
        }
        return arr;
    }
};