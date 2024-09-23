class Solution {
public:
    array<int,256>amap(string s)
    {
        array<int,256>mp={0};
        for(auto i:s)
           mp[i]++;

           return mp;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         map<array<int,256>,vector<string>>mp;
         vector<vector<string>>ans;

            for(auto i:strs)
            {
                mp[amap(i)].push_back(i);
            }

            for(auto i: mp)
            {
                ans.push_back(i.second);
            }

        return ans;
    }
};