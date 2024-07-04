class Solution {
public:
    int pivot(vector<int> &arr)
    {
        int num=arr[0],index=-1;
        int start=0,end=arr.size()-1;
        while(start<=end)
        {   int mid=start+(end-start)/2;
            if(num<=arr[mid])
            {
                index=mid;
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return index;
    }
    int binary_search(vector<int>& nums,int s,int e,int t)
    {

        while(s<=e)
        {
            int m=s+(e-s)/2;
            if( nums[m]==t)
            return m;
            if(nums[m]>t)
            {
                e=m-1;
            }
            else
            s=m+1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {

        int p= pivot(nums);
        cout<<"pivot Index"<<p<<endl;
        int n=nums.size(),ans=-1;
        if(target>=nums[0] && target<=nums[p])
          ans=binary_search(nums,0,p,target);
         else
        ans=binary_search(nums,p+1,n-1,target);
        
        return ans;
    }
};