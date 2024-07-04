class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int n=matrix.size(),m=matrix[0].size();
        int start=0,end=n*m-1;
        int mid=start+(end-start)/2;

        while(start<=end)
        {
            int row=mid/m;
            int col=mid%m;
            cout<<row<<".  "<<col<<".  ="<<mid<<endl;
            if(matrix[row][col]==target)
            return true;
            if(matrix[row][col]<target)
            start=mid+1;
            else
            end=mid-1;
           

            mid=start+(end-start)/2;

        }
        return false;


    }
};