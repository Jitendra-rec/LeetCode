class Solution {
public:
void solve(vector<vector<int>>& matrix,int i,int j){
    int row=matrix.size();
    int col=matrix[0].size();

    for(int k=0;k<col;k++){
       if( matrix[i][k]!=0)
           matrix[i][k]=78;
    }
     for(int k=0;k<row;k++){
        if( matrix[k][j]!=0)
            matrix[k][j]=78;
    }
    cout<<i<<j<<endl;

}
void setZeroes(vector<vector<int>>& matrix) {
   // vector<vector<int>>ans;
        int row=matrix.size();
        int col=matrix[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    solve(matrix,i,j);
                }
            }
        }

                for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==78){
                     matrix[i][j]=0;
                  
                }
           }
       }


        
    }
};