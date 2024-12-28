class Solution {
public:
    // void solve(vector<vector<int>>& matrix,int a,int b)
    // {
    //     int n=matrix.size();
    //      int m=matrix[0].size();
    //     for(int i=0;i<n;i++)
    //     matrix[i][b]=0;

    //      for(int i=0;i<m;i++)
    //     matrix[a][i]=0;
    // }
    // void setZeroes(vector<vector<int>>& matrix) {
    //     vector<pair<int,int>>pr;
    //     int n=matrix.size();
    //     int m=matrix[0].size();
    //     for(int i=0;i<n;i++)
    //         for(int j=0;j<m;j++)
    //         if(matrix[i][j]==0)
    //             pr.push_back({i,j});

    //     for(auto i:pr)
    //     {
    //       solve(matrix,i.first,i.second);
    //     }
        
    // }



     void setZeroes(vector<vector<int>>& mat) {
         int n=mat.size();
         int m=mat[0].size();
        vector<int> row(n,0);
        vector<int> col(m,0);


         for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            if(mat[i][j]==0)
            {
                row[i]=1;
                col[j]=1;
            }
        }

        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            if(row[i]==1 || col[j]==1)
            mat[i][j]=0;
        }
     }

};