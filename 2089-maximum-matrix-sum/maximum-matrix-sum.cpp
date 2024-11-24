class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        
        long long neg=0,zero=0,sum=0;
        int mini=INT_MAX;

        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix.size();j++)
            {
                sum+=abs(matrix[i][j]);
                if(matrix[i][j]<0)
                 neg++;
                 if(matrix[i][j]==0)
                 zero++;
                 mini=min(mini,abs(matrix[i][j]));
            }
        }

        if(zero>0)
        return sum;
        if(!(neg&1))
        return sum;
        
        return sum - 2*mini;
    }
};