class Solution {
public:
    void solve(vector<vector<int>>& matrix,int a,int b)
    {
        int n=matrix.size();
         int m=matrix[0].size();
        for(int i=0;i<n;i++)
        matrix[i][b]=0;

         for(int i=0;i<m;i++)
        matrix[a][i]=0;
    }
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>>pr;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            if(matrix[i][j]==0)
                pr.push_back({i,j});

        for(auto i:pr)
        {
           // cout<<i.first<<" = "<<i.second<<endl;
           solve(matrix,i.first,i.second);
        }
        
    }
};