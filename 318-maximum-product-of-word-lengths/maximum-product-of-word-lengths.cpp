class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n=words.size();
        vector<int>vec;
        for(int i=0;i<n;i++)
        {
            int num=0;
            for(auto c:words[i])
            num=num|1<<(c-'a');
           vec.push_back(num);
            
        }
        int pr=0;
        for(int i=0;i<n;i++)
        {
             for(int j=i+1;j<n;j++)
             {
                if((vec[i] & vec[j])==0)
                {
                    if(pr<(words[i].size()*words[j].size()))
                    pr=(words[i].size()*words[j].size());
                    // cout<<words[i]<<" and "<<words[j]<<words[i].size()*words[j].size()<<endl;
                }

             }
        }
        return pr;
    }
};