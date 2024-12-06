class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_map<int,int>mp;
        for(auto i:banned)
                mp[i]++;
        int ans=0,t=0;
        for(int i=1;i<=n;i++)
        {
            if(mp.count(i)==0)
               {
                ans+=i;
                if(ans<=maxSum)
                t++;
                else 
                return t;

               }
        }

        return t;


        
    }
};