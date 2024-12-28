class Solution {
public:

// aproach 1:
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


//aproach 2:
    //  void setZeroes(vector<vector<int>>& mat) {
    //      int n=mat.size();
    //      int m=mat[0].size();
    //     vector<int> row(n,0);
    //     vector<int> col(m,0);


    //     for(int i=0;i<n;i++)
    //     for(int j=0;j<m;j++)
    //     {
    //         if(mat[i][j]==0)
    //         {
    //             row[i]=1;
    //             col[j]=1;
    //         }
    //     }
    //     for(int i=0;i<n;i++)
    //     for(int j=0;j<m;j++)
    //     {
    //         if(row[i]==1 || col[j]==1)
    //         mat[i][j]=0;
    //     }
    //  }



//aproch 3:
void setZeroes(vector<vector<int>>& mat) {
         int n=mat.size();
         int m=mat[0].size();


        
         bool row=false,col=false;

        for(int i=0;i<n;i++)
        {
            if(mat[i][0]==0)
            row=true;
        }
         for(int i=0;i<m;i++)
        {
            if(mat[0][i]==0)
            col=true;
        }
       // cout<<row<<" "<<col<<endl;
        for(int i=1;i<n;i++)
        for(int j=1;j<m;j++)
        {
            if(mat[i][j]==0)
            {
                mat[i][0]=0;
                mat[0][j]=0;
            }
        }
        for(int i=1;i<n;i++)
        for(int j=1;j<m;j++)
        {
            if(mat[i][0]==0 || mat[0][j]==0)
            mat[i][j]=0;
        }
        

       
        if(row)
        {
            for(int i=0;i<n;i++)
            mat[i][0]=0;
        }
         if(col)
        {
            for(int i=0;i<m;i++)
            mat[0][i]=0;
        }

        // for(int i=0;i<n;i++)
        // {
        // for(int j=0;j<m;j++)
        // {
        //    //if(mat[i][0]==0 || mat[0][j]==0)
        //     cout<<mat[i][j]<<" ";
        // }
        // cout<<endl;
        // }
     }



};