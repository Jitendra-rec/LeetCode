class Solution {
public:
    int  bsearch(vector<int>& nums,int s,int e,int t)
    {
        
        while(s<=e)
        {
            int m=s+(e-s)/2;
            if(nums[m]==t)
            {
                return m;
            }
            else if(nums[m]>t)
            e=m-1;
            else
            s=m+1;
        }
        return -1;
    }
    int pivot(vector<int>& nums)
    {
        int p=0,n=nums[0],s=0,e=nums.size()-1;

        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]>=n)
            {
                p=mid;
                s=mid+1;

            }
            else
            e=mid-1;

        }
        return p;
    }
    int search(vector<int>& nums, int target) {

        int p=pivot(nums);
        int e=nums.size()-1;
        int ans1=bsearch(nums,0,p,target);
         int ans2=bsearch(nums,p+1,e,target);
         cout<<ans1<<" "<<ans2<<" "<<p;
         if(ans1==-1)
         return ans2;
         else
         return ans1;
    }
};