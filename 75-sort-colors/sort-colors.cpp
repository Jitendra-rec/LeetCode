class Solution {
public:
   void show(vector<int>& nums)
   {
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
   }
    void sortColors(vector<int>& nums) {
        
      int i=0,k=nums.size()-1,j=0;
      show(nums);
      while(j<=k)
      {
        if(nums[j]==0)
        {
            swap(nums[i++],nums[j++]);
            show(nums);
        } 
        else if(nums[j]==1)
        {
            j++;
        }
        else if(nums[j]==2)
        {
            swap(nums[j],nums[k--]);
            show(nums);
        }

      }
    }
};