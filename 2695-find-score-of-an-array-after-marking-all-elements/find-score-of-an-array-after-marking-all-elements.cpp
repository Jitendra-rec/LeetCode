#define ll long long
#define pii pair<int,int>

class Solution {
public:
    long long findScore(vector<int>& nums) {
        ll ans=0;
        priority_queue<pii,vector<pii>,greater<pii>>pq;
        for(int i=0;i<nums.size();i++)
        pq.push({nums[i],i});

        unordered_map<int,int>mp;

        while(!pq.empty())
        {
            auto t=pq.top();
            pq.pop();
            if(!mp.count(t.second))
            {
                 mp[t.second-1]=1;
                 mp[t.second]=1;
                 mp[t.second+1]=1;
                 ans+=t.first;
            }
        }


        return ans;
    }
};