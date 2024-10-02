class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>vec(arr);
        sort(vec.begin(),vec.end());
        unordered_map<int,int>mp;
        int k=1;
        for(int i=0;i<arr.size();i++)
        {
            if(mp.count(vec[i])==0)
            mp[vec[i]]=k++;
        }

        for(auto &i:arr)
        {
            i=mp[i];
        }

        return arr;
    }
};