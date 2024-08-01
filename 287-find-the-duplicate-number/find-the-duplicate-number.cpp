class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++)
        {   int j=abs(nums[i]);
            if(nums[j]<0)
            return j;
            else
            {
                nums[j]*=-1;
            }

        }
        return -1;
    }
};