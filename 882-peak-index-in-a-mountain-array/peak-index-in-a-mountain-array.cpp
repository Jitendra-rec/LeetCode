class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size(),max_index=0,max=INT_MIN;
     for(int i=0;i<n;i++)
     {
        if(arr[i]>max)
        {
            max=arr[i];
            max_index=i;
        }
     }
     return max_index;
    }
};