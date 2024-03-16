class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        int sum = 0,lar=0;

        for (int i = 0; i < n; i++)
         {
            if(nums[i]==0) sum+=-1;
            else sum+=1;
             if(sum==0) lar=i+1;
            if(mp[sum]==0) mp[sum]=i+1;
            else
            {
              // cout<<i-mp[sum]+1<<endl;
                lar=max(lar,i-mp[sum]+1);
               
            }   
        }
        if(sum==0)
        return n;
        for(auto i:mp)
        cout<<i.first<<" "<<i.second<<endl;
        return lar;
    }
};