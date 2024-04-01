#include<bits/stdc++.h>


class Solution {
public:
    int lengthOfLastWord(string s) {
           
     reverse(s.begin(),s.end());
     int len=0,i=0;
            if(s[i]==' ')
            {while(s[i++]==' ');
            i--;
            }
            cout<<s<<endl;
            cout<<i<<endl;
            while(i<s.length() && s[i]!=' ')
            {
                i++;
                len++;
            }
      
        return len;

    }
};