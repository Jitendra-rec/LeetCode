class Solution {
public:
    void maping( string& s)
    {
        char ch='a';
        unordered_map<char,char>mp;
        for(int i=0;i<s.length();i++)
        {
            if(mp.find(s[i])!=mp.end())
               s[i]=mp[s[i]]; 
            else
            { mp[s[i]]=ch;
               ch++;
                s[i]=mp[s[i]];
            }
           
        }
     
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
            vector<string> ans;
           maping(pattern);
            for(auto &i:words)
            {
                string t=i;
                 maping(i);
                if(i==pattern)
                ans.push_back(t);
            }
            return ans;
    }
};