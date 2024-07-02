class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> v1;
        vector<int> ans;

         for(auto i:nums1)
         v1[i]++;

        for(auto i:nums2)
        {
            if(v1[i]>0)
            {
                ans.push_back(i);
                v1[i]--;
            }
        }
         
        return ans;
    }
};