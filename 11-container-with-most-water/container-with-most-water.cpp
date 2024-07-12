class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int sum=0;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         int length=min(height[i],height[j]);
        //         int breath=j-i;
        //         sum=max(sum,length*breath);
        //     }
        // }
        // return sum;
        int start=0,end=n-1;
        while(start<end)
        {
            int length=min(height[start],height[end]);
            int breath=end-start;
            sum=max(sum,length*breath);

            if(height[start]<height[end])
            start++;
            else
            end--;
        }
        return sum;
    }
};