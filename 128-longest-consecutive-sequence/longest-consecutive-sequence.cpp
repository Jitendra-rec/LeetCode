class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i:nums)
            mp[i]++;
        int temp=0,ans=0;
          for(int i:nums) 
          {
            if(mp.find(i-1)==mp.end())
            {   int j=i,temp=0;
            cout<<i<<endl;
                while(mp.find(j)!=mp.end())
                {
                    temp++;j++;
                }
                ans=max(ans,temp);
            }
          } 
        return ans;

    }
};