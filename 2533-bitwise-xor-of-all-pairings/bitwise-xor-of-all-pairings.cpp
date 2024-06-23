class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size();
        int x=0;
        if(n2&1)
        {
            for(auto i:nums1)
            x^=i;
        }
        if(n1&1)
        {
            for(auto i:nums2)
            x^=i;
        }
        return x;
    }
};