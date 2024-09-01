class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& o, int m, int n) {
       // cout<<n*m<<" "<<o.size()<<endl;
        if(n*m!=o.size())
        return {};

        vector<vector<int>>arr(m,vector<int>(n,0));
        int t=0;
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            arr[i][j]=o[t++];
        }
        return arr;
    }
};