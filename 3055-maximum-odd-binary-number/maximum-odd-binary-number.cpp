class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int one=-1,zero=0;
        for(auto i:s)
        {
            if(i=='1')  one++;
            else zero++;
        }
       int i=0;
       cout<<one<<".  "<<zero;
       while(one>0)
       {
           s[i++]='1';
           one--;
       }
        while(zero>0)
       {
           s[i++]='0';
           zero--;
       }
       s[i]='1';
       return s;


        
    }
};