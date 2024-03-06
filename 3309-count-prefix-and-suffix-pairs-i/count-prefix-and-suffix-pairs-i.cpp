class Solution {
public:
    bool abc(string a,string b)
    {
        int j=b.size(),i=a.size();
        if(i>j) return false;
        string p=b.substr(0,i);
        string s=b.substr(j-i);
        //cout<<p<<" and "<<s<<endl;
        if(p==s && p==a)
        return true;
        return false;
    }
    int countPrefixSuffixPairs(vector<string>& w) {

        int count =0;
        for(int i=0;i<w.size();i++)
        {
            for(int j=i+1;j<w.size();j++)
            if(abc(w[i],w[j])==1)
            count+=1;
        }
        return count;
        
    }
};