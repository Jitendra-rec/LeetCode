class Solution {
public:
    int beautySum(string s) {
        unordered_map<char ,int > mp;
        int beautysum=0;

        for(int i=0;i<s.length();i++)
        {        mp.clear();
            for(int j=i;j<s.length();j++)
            {
                mp[s[j]]++;
                int mini=INT_MAX;
                int maxi=INT_MIN;
                for(auto temp:mp)
                {
                    mini=min(mini,temp.second);
                    maxi=max(maxi,temp.second);
                }
                beautysum += maxi-mini;
            }

           
        }
         return beautysum;
    }
};