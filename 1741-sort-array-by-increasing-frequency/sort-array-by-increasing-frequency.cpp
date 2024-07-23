class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int>mp;
        vector<pair<int,int>>vec;

        for(auto i:nums)
        {
            mp[i]++;
        }

        sort(nums.begin(), nums.end(), [mp](int a, int b) {
            // If frequencies are different, sort by frequency
             unordered_map<int, int>m=mp;
            if (m[a] != m[b]) {
                return m[a] < m[b];
            }
            // If frequencies are the same, sort by value in decreasing order
            return a > b;
        });
        return nums;


    }
};