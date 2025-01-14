class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        unordered_map<int,int>mp;
        vector<int>arr;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(mp[A[i]]==1) c++;
            if(mp[B[i]]==1) c++;
            if(A[i]==B[i])  c++;
            arr.push_back(c);
            mp[A[i]]++;
            mp[B[i]]++;
        }
        return arr;
    }
};