class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        reverse(d.begin(),d.end());
        int carry=1;
        for(auto &i :d)
        {
            i=i+carry;
            carry=i/10;
            i=i%10;
           // cout<<i<<" ";
        }
        if(carry>0)
        d.push_back(carry);

         reverse(d.begin(),d.end());
         return d;


    }
};