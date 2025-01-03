typedef long long ll;
class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        ll rsum=0;
        for(auto i:nums)rsum+=i;
        ll lsum=0;
        int ans=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            lsum+=nums[i];
            if(lsum>=(rsum-lsum)) ans++;
        }
        return ans;
    }
};