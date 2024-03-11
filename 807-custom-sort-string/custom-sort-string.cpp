class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int>mp;
        for(auto i:s)
        mp[i]++;
    string t="";
        for(auto i:order)
        {
            while(mp[i]>0)
            {
                t+=i;
                mp[i]--;
            }
        }
        for(auto i:mp)
        {
            while(i.second>0)
           { t+=i.first;
           i.second--;
           }
        }
        return t;

        
    }
};