class Solution {
public:
    bool same(string s)
    {
        for(int i=0;i<s.size()-1;i++)
        if(s[i]!=s[i+1])
        return false;
        return true;
    }
    int maximumLength(string s) {
        unordered_map<string,int>mp;

        for(int i=0;i<s.size();i++)
        {
            string t="";
            for(int j=i;j<s.size();j++)
            {
                t+=s[j];
                mp[t]++;
            }
        }
        int ans=-1;
        for(auto i:mp)
        { 
            if(i.second>2 && same(i.first))
            {
               // cout<<i.first<<endl;
                string mn=i.first;
                int temp=mn.size();
                ans=max(temp,ans);
            }
        }
        return ans;
    }
};