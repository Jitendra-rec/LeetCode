class Solution {
public:
    int twoLoop(vector<int>& nums, int k)
    {
     int count=0;
        set<pair<int,int>>st;
       for(int i=0;i<nums.size();i++)
       {
        for(int j=i+1;j<nums.size();j++)
        {
            if(abs(nums[i]-nums[j])==k)
            {
                if(nums[i]>nums[j])
                st.insert({nums[i],nums[j]});
                else
                st.insert({nums[j],nums[i]});
            }
            
        }
       } 
       return st.size();
    }
    int twoPointer(vector<int>& nums, int k)
    {
        sort(nums.begin(),nums.end());
        int count=0,i=0,j=1;
        set<pair<int,int>>st;
        while(j<nums.size())
        {
            if(nums[j]-nums[i]==k && i!=j)
            {st.insert({nums[i],nums[j]});i++;j++;}
            else if((nums[j]-nums[i])>k)
            i++;
            else
            j++;
        }
        return st.size();
    }
    int findPairs(vector<int>& nums, int k) {
    //   return twoLoop(nums,k);
        return twoPointer(nums,k);
    }
};