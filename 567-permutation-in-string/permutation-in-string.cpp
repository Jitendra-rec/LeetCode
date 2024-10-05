class Solution {
public:
    bool check(unordered_map<char,int>&a,unordered_map<char,int>&b)
    {
        for(auto i:a)
        {
            if(i.second != b[i.first])
            return false;
        }
         for(auto i:b)
        {
            if(i.second != a[i.first])
            return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int sm=s1.size(),lr=s2.size();
        if(sm>lr)
        return false;
        unordered_map<char,int>small;
        unordered_map<char,int>large;
        for(auto i:s1)
            small[i]++;


        for(int i=0;i<=lr-sm;i++)
        {
            string t=s2.substr(i,sm);
            large.clear();
            for(auto i:t)
               large[i]++;
            if(check(small,large))
            return true;
        }
        return false;
    }
};