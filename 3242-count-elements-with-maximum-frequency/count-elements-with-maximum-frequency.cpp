class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums)
        {
            mp[i]++;
        }
        int max=0,sum=0;
        for(auto i: mp)
        {
            if(i.second>max)
            max=i.second;
        }
        cout<<max<<endl;
        for(auto i:mp)
        {     cout<<i.first<<"  "<<i.second<<endl;
            if(i.second==max)
            sum+=max;
        }
        return sum;
        
    }
};