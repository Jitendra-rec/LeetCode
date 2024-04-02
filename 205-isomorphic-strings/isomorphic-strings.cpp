class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        map<char,int> mp1,mp2;
        for(char ch:s)
        {
            if( mp1[ch] > 0) continue;
            mp1[ch]=mp1.size();
        }
        for(char ch:t)
        {
            if( mp2[ch] > 0) continue;
            mp2[ch]=mp2.size();
        }
        for(int i=0;i<s.length();i++)
        {
            if(mp1[s[i]] != mp2[t[i]]) return 0;
        }
        return 1;
    }
};