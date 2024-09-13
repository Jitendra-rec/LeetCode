class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>prefix;
        int x=0;
        vector<int>ans;
        for(auto i: arr)
        {
            x^=i;
            prefix.push_back(x);
        }
        for(auto i:queries)
        {
            int left=i[0]-1;
            int right=i[1];
            int temp;
            cout<<left<<" "<<right<<endl;
            if(left>=0)
            temp=prefix[right]^prefix[left];
            else
            temp=prefix[right];

            ans.push_back(temp);
        }
        return ans;
    }
};