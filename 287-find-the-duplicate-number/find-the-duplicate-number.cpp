class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       unordered_map<int ,int> mp;
       for(auto i:nums)
       mp[i]++;

       for(auto i:nums)
       { 
            if(mp[i]>1)
            return i;
       }
       return 0;
    }
};