class Solution {
public:
    vector<int> intersection(vector<int>& n1, vector<int>& n2) {
        unordered_map<int ,int>mp;
        for(auto i:n1)
        mp[i]++;
        vector<int>num;
        for(auto i:n2)
        {
            if(mp[i]>0)
            {
                num.push_back(i);
                mp[i]=0;
            }
        }
        return num;
        
    }
};