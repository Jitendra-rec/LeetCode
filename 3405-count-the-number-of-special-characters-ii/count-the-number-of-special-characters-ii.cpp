class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int>up,lr;
        int sum=0;
        for(int i=0;i<word.length();i++)
        {
            if(word[i]>='a' && word[i]<='z')
            lr[word[i]]=i;
            else
            if(up.find(word[i]-'A'+'a')==up.end())
            up[word[i]-'A'+'a']=i;
        }
        for(auto i:up)
        cout<<i.first<<".  "<<i.second<<endl;

        // for(auto i:lr)
        // cout<<i.first<<".  "<<i.second<<endl;
        for(auto i:lr)
        {
            char c=i.first;
            int t=up[c];
            if(t>i.second)
            sum++;
        }
        return sum;

        
    }
};