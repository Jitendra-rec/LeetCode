class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        unordered_map<char,char> mp1;
        unordered_map<char,bool> mp2;
        for(int i=0;i<s.length();i++)
        {
            if(mp2.find(t[i])==mp2.end())
            {
                mp2[t[i]]=true;
                 if(mp1.find(s[i])==mp1.end())
                    mp1[s[i]]=t[i];
                    else 
                    return 0;
            }
            else
            {
                //if(mp1.find(s[i])==mp1.end())
                if(mp1[s[i]]!=t[i])
                return false;

            }

        }
        // for(auto i:mp1)
        // cout<<i.first<< " ---- "<<i.second<<endl;

        //         for(auto i:mp2)
        // cout<<i.first<< " ---- "<<i.second<<endl;

        
        return 1;
    }
};