class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>arr;
        int srow=0,erow=matrix.size(),scolumn=0,ecolumn=matrix[0].size();
        int count=0,n=erow*ecolumn;

        while(count<n)
        {
            for(int i=scolumn;i<ecolumn && count<n;i++)
            {    
                arr.push_back(matrix[srow][i]);
                count++;

            }
             srow++;
            for(int i=srow;i<erow && count<n;i++)
            {
                arr.push_back(matrix[i][ecolumn-1]);
                 count++;
                
            }
            ecolumn--;
            for(int i=ecolumn-1;i>=scolumn && count<n;i--)
            {
                arr.push_back(matrix[erow-1][i]);
                 count++;
                  
            }
             erow--;
            for(int i=erow-1;i>=srow && count<n;i--)
            {
                 arr.push_back(matrix[i][scolumn]);
                  count++;
                
            }
             scolumn++;
        
        }
        return arr;
    }
};