class Solution {
public:
    vector<string>split(string s)
    {
        vector<string>sp;
        string temp="";
        for(auto i:s)
        {
            if(i==' ')
            {
                sp.push_back(temp);
                temp="";
            }
            else
            temp+=i;
        }
        sp.push_back(temp);
        return sp;
    }
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>mp1;
        vector<string>s;
        vector<string>s11=split(s1);
        vector<string>s22=split(s2);
        
        for(auto i:s11)
        {
            mp1[i]++;

        }
         for(auto i:s22)
        {   
            mp1[i]++;
        }

        for(auto i:mp1)
        {
            if(i.second==1)
            s.push_back(i.first);
        }
        return s;
    }
};