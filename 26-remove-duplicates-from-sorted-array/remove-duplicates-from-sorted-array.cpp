class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> ar;
        for (auto i : nums)
            ar.insert(i);
        int t = 0;
        for (auto i : ar)
            nums[t++] = i;
        return t;
    }
};