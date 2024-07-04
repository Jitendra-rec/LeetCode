class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // Travel and find max

    // int n=arr.size(),max_index=0,max=INT_MIN;
    //  for(int i=0;i<n;i++)
    //  {
    //     if(arr[i]>max)
    //     {
    //         max=arr[i];
    //         max_index=i;
    //     }
    //  }
    //  return max_index;
    // 
// finding using inbuilt function but in this it return only number of maximum

    // auto ans=max_element(arr.begin(),arr.end());
    // return *ans;
    
    int start=0,end=arr.size()-1;
    
    while(start<end)
    {
        int mid=start + (end-start)/2;

        if(arr[mid]< arr[mid+1])
        start=mid+1;
        else
        end=mid;
    }
        return start;
    }


};