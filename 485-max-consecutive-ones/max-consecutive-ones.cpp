class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0;
        int num=0;
        for(auto i:nums)
        {
            if(i==0)
            {
                maxi=max(num,maxi);
                num=0;
            }
            else num++;
        }

        return max(num,maxi);
        
    }
};