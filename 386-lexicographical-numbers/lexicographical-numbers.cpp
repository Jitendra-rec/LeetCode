class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int>arr(n,0);
        for(int i=0;i<n;i++)
        {
            arr[i]=i+1;
        }
        sort(arr.begin(),arr.end(),[&](int a,int b)
        {
            string a1=to_string(a);
             string a2=to_string(b);
             return a1<a2;            
        });
        return arr;
        
    }
};