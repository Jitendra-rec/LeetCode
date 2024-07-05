class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
// xor methord which take O(N) time and space =O(1);
        // int x=0;
        // for(auto i:nums)
        // x^=i;
        // return x;

    int start=0,end=nums.size()-1,mid,ans=-1,left;

    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(mid>0 && nums[mid-1]==nums[mid])
         left=mid-1;
        else left=mid;

        if(left & 1)
        {
            //ans=nums[left];
            end=mid-1;
        }
        else
        start=mid+1;

    }
    return nums[end];

    }
};