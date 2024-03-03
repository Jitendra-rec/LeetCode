class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>ht;

        for(int i=0;i<nums.size();i++)
        { int diff=target-nums[i];
            if(ht.count(diff))
            return {ht[diff],i};
            
            ht[nums[i]]=i;
        }

        return{0,0};
    }
};