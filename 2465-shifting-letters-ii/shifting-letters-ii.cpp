class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
       int n=s.size();
        vector<int>arr(n+1,0);

        for(auto i:shifts)
        {   if(i[2]==0)
           { arr[i[0]]-=1;
              arr[i[1]+1]+=1;  
           }
           else
           {
            arr[i[0]]+=1;
            arr[i[1]+1]-=1;
           }
        }

        int pre=0;
        for(auto &i:arr)
        {
            pre+=i;
            i=pre%26;
            if(i<0) i+=26;
        }
       // for(auto i:arr)
        //cout<<i<<" ";
       // cout<<endl;
        for(int i=0;i<n;i++)
        {
              s[i]='a'+(s[i]-'a'+arr[i])%26;
        }

        return s;
    }
};