class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mp;
        unordered_map<char,char>mp2;

        if(s.size()!=t.size()) return false;

        for(int i=0;i<s.size();i++)
        {
            if(mp.count(s[i])==0 && mp2.count(t[i])==0) {
                mp[s[i]]=t[i];
                mp2[t[i]]=s[i];
            }
            else
            {
                if(mp[s[i]]!=t[i] && mp2[t[i]]!=s[i])
                return false;
            }
        }

        return true;
      
    }
};