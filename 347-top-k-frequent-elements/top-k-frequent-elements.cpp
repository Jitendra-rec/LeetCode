 bool cmpt(pair<int,int>a,pair<int,int>b)
    {
        if(a.first>b.first)
        return true;
        return false;

    }
class Solution {
public:
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto i:nums)
        mp[i]++;

        vector<pair<int,int>>arr;

        for(auto i:mp)
        {
            arr.push_back({i.second,i.first,});
        }
        sort(arr.begin(),arr.end(),cmpt);
    vector<int>ans;
    // for(int i=0;i<k;i++)
    // cout<<arr[i].first<<" "<<arr[i].second<<endl;
    for(int i=0;i<k;i++)
    ans.push_back(arr[i].second);
        return ans;
    }
};