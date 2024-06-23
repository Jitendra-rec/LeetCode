class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    //    unordered_map<int ,int> mp;
    //    for(auto i:nums)
    //    mp[i]++;

    //    for(auto i:nums)
    //    { 
    //         if(mp[i]>1)
    //         return i;
    //    }
    //    return 0;
    // 
    for(int i=0;i <nums.size();i++)
    {
        if(nums[abs(nums[i])]<0)
        return abs(nums[i]);
        else
        {
            nums[abs(nums[i])]*=-1;
        }
    }
        return 0;
    }

};