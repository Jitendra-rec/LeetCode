class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Approch 1
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
            // Approch 2
    // for(int i=0;i <nums.size();i++)
    // {
    //     if(nums[abs(nums[i])]<0)
    //     return abs(nums[i]);
    //     else
    //     {
    //         nums[abs(nums[i])]*=-1;
    //     }
    // }
    //     return 0;

        // approch 3
    while(nums[nums[0]]!=nums[0]){
        swap(nums[0],nums[nums[0]]);
    }
    return nums[0];
    }

};