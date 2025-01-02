class Solution {
public:
    bool isvowal(string s)
    {
        char ch1=s[0],ch2=s[s.size()-1];
        if(ch1=='a'||ch1=='e'||ch1=='i'||ch1=='o'||ch1=='u')
        if(ch2=='a'||ch2=='e'||ch2=='i'||ch2=='o'||ch2=='u')
        return true;
        return false;
        
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& q) {

        vector<int>prefix,ans;
        int f=0;
        for(auto str:words)
        {
            f+=isvowal(str);
            prefix.push_back(f);

        }
    
        for(auto i:q)
        {
            int temp=prefix[i[1]]-prefix[i[0]]+isvowal(words[i[0]]);
            ans.push_back(temp);
        }

        return ans;
        
    }
};