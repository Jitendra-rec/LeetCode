class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int x=k,n=0;
        for(int i=0;i<nums.size();i++)
        {
            x^=nums[i];
        }
        while(x>0)
        {
            if(x%2!=0)
                 n++;
                 x/=2;
        }
        return n;

    }
};