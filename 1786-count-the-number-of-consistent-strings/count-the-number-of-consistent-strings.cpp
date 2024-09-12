class Solution {
public:
    bool comp(unordered_map<char,int>mp,unordered_map<char,int>mp1)
    {
        for(auto i:mp1)
        {
            if(mp.count(i.first)==0)
            return false;
        }
        return true;
    }
    int countConsistentStrings(string a, vector<string>& words) {
        unordered_map<char,int>mp;
         unordered_map<char,int>mp1;
         int counter=0;
        for(auto i:a)
        mp[i]++;

        for(auto i:words)
        {   mp1.clear();
            for(auto j:i)
            {
                mp1[j]++;
            }
            counter+=comp(mp,mp1);
        }
        return counter;
    }
};