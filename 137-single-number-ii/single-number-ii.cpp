class Solution {
public:
int bitwise(vector<int>& nums)
{
        int ans=0;
       for(int i=0;i<32;i++)
       {
            int cnt=0;
            for(auto j:nums)
            {
                cnt+=(j>>i)&1;
            }
            ans=ans | ((cnt%3)<<i);
       } 
       return ans;     
//Time= O(N*32) which is greater than O(n*log(n)) kyu ki log n kabhi 31 nhi hoga worst case me ho sakta hai;
    }

    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1; i< nums.size();i+=3)
        {
            if(nums[i]!=nums[i-1] || nums[i]!=nums[i+1])
            return nums[i-1];
        }
        return nums[nums.size()-1];
    }
};