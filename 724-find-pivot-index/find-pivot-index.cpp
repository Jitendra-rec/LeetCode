class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> left;
        vector<int> right(nums.size(),0);
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            left.push_back(sum);
            sum+=nums[i];
        }
          for(auto i:left)
        cout<<i<<" ";
            sum=0;
            cout<<endl;
        for(int i=nums.size()-1;i>=0;i--)
        {
            right[i]=sum;
           // cout<<sum<<" ";
            sum+=nums[i];
        }
        for(auto i:right)
        cout<<i<<" ";
     for(int i=0;i<nums.size();i++)
     {
        if(right[i]==left[i])
            { cout<<endl<<right[i]<<" "<<left[i];
            return i;}
     }
        return -1;
        
    }
};