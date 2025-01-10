class Solution {
public:
    void comp( vector<int>&mp, vector<int>&temp)
    {
        for(int i=0;i<26;i++)
        {
            mp[i]=max(mp[i],temp[i]);
        }
    }
    bool check(vector<int>&mp, vector<int>&temp)
    {
         for(int i=0;i<26;i++)
        {
            if(mp[i]>temp[i])
            return false;
        }
        return true;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int>mp(26,0);
        for(auto i:words2)
        {
            vector<int>temp(26,0);
            for(auto j:i)
            {
               temp[j-'a']++;
            }
            comp(mp,temp);
        }
        vector<string>ans;
        for(auto i:words1)
        {
            vector<int>temp(26,0);
            for(auto j:i)
            {
               temp[j-'a']++;
            }
            if(check(mp,temp))
            ans.push_back(i);

        }
        // for(int i=0;i<26;i++)
        // cout<<char(i+'a')<<" "<<mp[i]<<endl;

        return ans;

    
    }
};